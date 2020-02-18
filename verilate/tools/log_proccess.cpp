
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <utility>
#include <algorithm>
#include <iomanip>

#define ENTRY_ADDR_STR "80000000"
#define ENTRY_ADDR 0x80000000

using namespace std;

map<unsigned int,string> function_entry_map;
map<unsigned int,string> instr;

bool is_number(const std::string& s)
{
  return !s.empty() && std::find_if(s.begin(),
        s.end(), [](unsigned char c) { return !std::isxdigit(c); }) == s.end();
}


int main(int argc,char* argv[])
{
  if (argc < 3){
    cerr << "[usage] ./log_proccess objdump log" << endl;
    return -1;
  }

  string objdump_filename(argv[1]);
  string log_filename(argv[2]);
  fstream obj_f(objdump_filename,fstream::in);
  fstream log_f(log_filename,fstream::in);
  fstream dec_log("dec_cpu.log",fstream::out);

  if (!obj_f.is_open()){
    cerr << "failed to open \"" << objdump_filename << "\" !!! " <<endl;
    return -1;
  }

  if (!log_f.is_open()){
    cerr << "failed to open \"" << log_filename << "\" !!! " <<endl;
    return -1;
  }

  if (!dec_log.is_open()){
    cerr << "failed to open \"dec_cpu.log\" !!! " <<endl;
    return -1;
  }

  string line_buffer;
  bool start_flag = true;
  while (getline(obj_f,line_buffer)){
    if (line_buffer.size()>8){
      string addr_str = line_buffer.substr(0,8);
      if (addr_str.compare(ENTRY_ADDR_STR) == 0)
        start_flag = true;

      if (start_flag && is_number(addr_str)) {
        unsigned int addr_val = stoul(addr_str,nullptr,16);
        if (line_buffer[8] == ':') { //is instruction
          string instruction_contain = line_buffer.substr(10); //to end
          instr.insert(make_pair(addr_val,instruction_contain));
          //cout << "dump " << setw(8) << hex << right << addr_val << " " << instruction_contain << endl;
        } else { // is function entry
          string function_data = line_buffer.substr(9); //to end
          function_entry_map.insert(pair<unsigned int,string>(addr_val,function_data));
        }
      }
    }
  }

  int cumulation = 1;
  unsigned int prev_instr_addr = 0;
  map<unsigned int,string>::iterator it;

  stringstream log_buffer;
  while (getline(log_f,line_buffer)) {
    if (line_buffer[0] == '#') {
      unsigned int clk = stoul(line_buffer.substr(1,10),nullptr,16);
      unsigned int addr_val = stoul(line_buffer.substr(12,8),nullptr,16);
      if (prev_instr_addr != addr_val) {
        cumulation = 1;
        prev_instr_addr = addr_val;
        it = function_entry_map.find(addr_val);
        //cout << setw(8) << hex << addr_val << endl;
        if (it != function_entry_map.end()) {
          log_buffer << "function_entry:" << setfill('0') << setw(8) << right << hex
            << addr_val << function_entry_map[addr_val] << endl;
        }
        log_buffer << "clock = " << setfill(' ') << setw(8) << clk << ": instr_cycle:"
          << setw(5) << dec << cumulation << " instruction:"
          << setfill('0') << setw(8) << right << hex << addr_val << ":    " << instr[addr_val] << endl;
      } else {
        cumulation++;
        log_buffer << "clock = " << setfill(' ') << setw(8) << clk << ": instr_cycle:"
          << setw(5) << dec << cumulation << " instruction:"
          << setfill('0') << setw(8) << right << hex << addr_val << ":    " << instr[addr_val] << endl;
      }
      dec_log << log_buffer.rdbuf();
    } else {
      dec_log << line_buffer << endl;
    }
  }
  obj_f.close();
  log_f.close();
  return 0;
}


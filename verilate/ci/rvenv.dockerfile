FROM ubuntu:18.04

WORKDIR /tmp

RUN apt-get update && apt-get upgrade -y

RUN apt-get update && apt-get install -y --no-install-recommends \
    apt-utils \
    && apt-get install  -y --no-install-recommends \
    autoconf automake autotools-dev curl python3 libmpc-dev libmpfr-dev \
    libgmp-dev gawk build-essential bison flex texinfo gperf libtool patchutils \
    bc zlib1g-dev libexpat-dev verilator git ca-certificates
RUN mkdir /opt/riscv/

RUN git clone https://github.com/riscv/riscv-gnu-toolchain \
    && cd riscv-gnu-toolchain \
    && git submodule update --init --recursive

RUN cd riscv-gnu-toolchain \
    ./configure --prefix=/opt/riscv \
    && make -j8

RUN cd riscv-gnu-toolchain \
    && ./configure --prefix=/opt/riscv --with-arch=rv32gc --with-abi=ilp32 \
    && make -j8

RUN rm -rf /tmp/riscv-gnu-toolchain

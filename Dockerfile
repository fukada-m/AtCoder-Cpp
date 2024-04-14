FROM gcc:latest

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /root/cpp

COPY .gdbinit /root/.gdbinit

RUN apt-get update && apt-get install -y \
 gdb \
 python3 \
 && rm -rf /var/lib/apt/lists/*

 
FROM gcc:latest

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /root/cpp

RUN apt-get update && apt-get install -y \
 gdb

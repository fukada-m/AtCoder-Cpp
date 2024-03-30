FROM ubuntu:latest

ENV DEBIAN_FRONTEND=noninteractive

WORKDIR /cpp/

RUN apt-get update && apt-get install -y \
 build-essential cmake clang libssl-dev

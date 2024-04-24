FROM gcc:latest

ENV DEBIAN_FRONTEND=noninteractive
ENV TZ=Asia/Tokyo

WORKDIR /root/cpp

COPY .gdbinit /root/.gdbinit

# 起動シェルをshからbashに変更
SHELL ["/bin/bash", "-c"]

RUN apt-get update && apt-get install -y \
 gdb \
 python3 \
 python3-pip \
 python3-venv \
 time \
 tzdata \
 tree \
 git \
 curl \
 && rm -rf /var/lib/apt/lists/*

 RUN curl -fsSL https://deb.nodesource.com/setup_20.x | bash - \
     && apt-get install -y nodejs 

 RUN python3 -m venv /opt/venv
 ENV PATH="/opt/venv/bin:$PATH"

 RUN git clone https://github.com/atcoder/ac-library.git /lib/ac-library
 ENV CPLUS_INCLUDE_PATH /lib/ac-library
 
 RUN npm install -g atcoder-cli@2.2.0
 RUN pip install online-judge-tools==11.5.1

RUN acc config default-task-choice all \
 && acc config default-template cpp
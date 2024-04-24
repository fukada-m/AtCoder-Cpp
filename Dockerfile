FROM gcc:latest

ENV DEBIAN_FRONTEND=noninteractive
ENV TZ=Asia/Tokyo

WORKDIR /root/cpp

COPY .gdbinit /root/.gdbinit
COPY sh-script/init_config.sh /root/init_config.sh

# .envから環境変数を設定
ARG ATCODER_USER
ARG ATCODER_PASS
ENV ATCODER_USER=$ATCODER_USER
ENV ATCODER_PASS=$ATCODER_PASS

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

 RUN chmod +x /root/init_config.sh

 ENTRYPOINT [ "/root/init_config.sh" ]
 CMD [ "bash" ]
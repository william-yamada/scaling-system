FROM ubuntu:focal

SHELL ["/bin/bash","-c"]
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y git gcc g++ make cmake build-essential checkinstall zlib1g-dev wget

RUN git clone https://github.com/oatpp/oatpp.git
RUN cd oatpp/ && mkdir build && cd build && cmake .. && make install 
RUN rm -rf oatpp/

RUN apt-get install -y pkg-config curl libcurl4-openssl-dev
RUN git clone https://github.com/oatpp/oatpp-curl.git
RUN cd oatpp-curl/ && mkdir build && cd build && cmake .. && make install 
RUN rm -rf oatpp-curl/

RUN git clone https://github.com/oatpp/oatpp-swagger.git
RUN cd oatpp-swagger/ && mkdir build && cd build && cmake .. && make install 
RUN rm -rf oatpp-swagger/

RUN git clone https://github.com/oatpp/oatpp-websocket.git
RUN cd oatpp-websocket/ && mkdir build && cd build && cmake .. && make install 
RUN rm -rf oatpp-websocket/

RUN apt-get install -y lsb-core
RUN sh -c 'echo "deb http://apt.postgresql.org/pub/repos/apt $(lsb_release -cs)-pgdg main" > /etc/apt/sources.list.d/pgdg.list'
RUN wget --quiet -O - https://www.postgresql.org/media/keys/ACCC4CF8.asc | apt-key add -
RUN apt-get update && apt-get -y install postgresql libpq-dev postgresql-server-dev-all
RUN git clone https://github.com/oatpp/oatpp-postgresql.git
RUN cd oatpp-postgresql/ && mkdir build && cd build && cmake .. && make install
RUN rm -rf oatpp-postgresql/

COPY . /opt/app/
WORKDIR /opt/app/
FROM ubuntu:18.04

ENV TZ=Europe/Berlin

SHELL ["/bin/bash", "-c"]

RUN apt-get clean && \
    apt-get autoclean


# default cmake version 3.10.2
RUN apt-get update && apt-get upgrade -y && \
    apt-get install -y \
    htop \
    tree \
    apt-utils \
    curl \
    wget \
    cmake \ 
    git \
    openssh-server \
    build-essential \
    libboost-all-dev \
    net-tools \
    vim \
    stress

# default gcc verison 7.5.0
RUN apt-get install -y libc-ares-dev libssl-dev gcc g++ make

# install protobuf
COPY install/protobuf /tmp/install/protobuf
RUN /tmp/install/protobuf/install_protobuf.sh

# install abseil (dependency of grpc)
COPY install/abseil /tmp/install/abseil
RUN /tmp/install/abseil/install_abseil.sh

# install grpc
COPY install/grpc /tmp/install/grpc
RUN /tmp/install/grpc/install_grpc.sh

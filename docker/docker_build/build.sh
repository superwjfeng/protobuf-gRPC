#!/bin/bash

IMAGE_NAME="grpc:learn"

docker build -t ${IMAGE_NAME} --network host -f base.dockerfile .
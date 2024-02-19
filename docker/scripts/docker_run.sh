#!/bin/bash

CONTAINER_NAME=test
IMAGE_NAME=grpc:learn

echo "stop and rm exist docker container"
docker stop ${CONTAINER_NAME} > /dev/null
docker rm -f -v ${CONTAINER_NAME} > /dev/null

echo "start docker container"
docker run -it -d --name ${CONTAINER_NAME} ${IMAGE_NAME}
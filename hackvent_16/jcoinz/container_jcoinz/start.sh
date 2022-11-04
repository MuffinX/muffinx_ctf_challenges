#!/bin/sh

docker stop jcoinz
docker rm jcoinz

docker build -t hackvent_16/jcoinz .

docker run -d -p 3117:3117 --restart always --name jcoinz hackvent_16/jcoinz

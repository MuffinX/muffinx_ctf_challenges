#!/bin/sh

docker stop m3m0ry
docker rm m3m0ry

docker build -t hackvent_16/m3m0ry .

docker run -d -p 3301:3301 --restart always --name m3m0ry hackvent_16/m3m0ry

#!/bin/sh

docker stop marshmallows
docker rm marshmallows

docker build -t hackvent_16/marshmallows .

docker run -d -p 1033:1033 --restart always --name marshmallows hackvent_16/marshmallows

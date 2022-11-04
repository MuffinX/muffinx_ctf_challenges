#!/bin/sh

docker stop pengus_site
docker rm pengus_site

docker build -t hackvent_16/pengus_site .

docker run -d --restart always --name pengus_site hackvent_16/pengus_site

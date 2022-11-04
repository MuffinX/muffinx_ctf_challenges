FROM ubuntu:14.04
MAINTAINER MuffinX <muffinx@openmailbox.org>

# install dependencies
EXPOSE 3301
RUN apt-get update && apt-get -y install python3-pip socat
RUN pip3 install pyyaml

# add user
RUN useradd -s /sbin/nologin m3m0ry

# add challenge files

ADD import/ /
RUN chmod 704 /home/m3m0ry/m3m0ry
RUN chmod +x /home/m3m0ry/m3m0ry

# run challenge
USER m3m0ry
ENTRYPOINT ["socat", "TCP-LISTEN:3301,reuseaddr,fork", "EXEC:\"./home/m3m0ry/m3m0ry\""]

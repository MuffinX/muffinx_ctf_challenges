FROM ubuntu:14.04
MAINTAINER MuffinX <muffinx@openmailbox.org>

# install dependencies
EXPOSE 1033
RUN apt-get update && apt-get -y install python3-pip socat
RUN pip3 install pyyaml

# add user
RUN useradd -s /sbin/nologin marshmallows

# add challenge files

ADD import/ /
RUN chmod 704 /home/marshmallows/marshmallows.py
RUN chmod 704 /home/marshmallows/marshmallows.sh

# run challenge
USER marshmallows
ENTRYPOINT ["socat", "TCP-LISTEN:1033,reuseaddr,fork", "EXEC:\"/bin/sh /home/marshmallows/marshmallows.sh\""]

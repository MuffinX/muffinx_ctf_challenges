FROM anapsix/alpine-java
MAINTAINER MuffinX <muffinx@openmailbox.org>

# install dependencies
EXPOSE 3117
RUN apk update && apk add socat

# add user
RUN adduser -D -s /sbin/nologin jcoinz

# add challenge files

ADD import/ /
RUN chmod 704 /home/jcoinz/jcoinz.jar
RUN chmod 704 /home/jcoinz/9f40461baba9bf00ba9174beeeb9b8a80c0ffba6

# run challenge
USER jcoinz
ENTRYPOINT ["socat", "TCP-LISTEN:3117,reuseaddr,fork", "EXEC:\"java -jar /home/jcoinz/jcoinz.jar\""]

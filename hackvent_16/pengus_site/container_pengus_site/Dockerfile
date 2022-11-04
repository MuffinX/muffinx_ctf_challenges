FROM janes/alpine-lamp
MAINTAINER MuffinX <muffinx@openmailbox.org>


RUN rm /www/index.php

ADD import/ /

# RUN mysql -u mysql < /database/database.sql


RUN apk update && \
    apk add --no-cache  --repository http://dl-cdn.alpinelinux.org/alpine/edge/main --repository  http://dl-cdn.alpinelinux.org/alpine/edge/community tor

RUN rm /etc/tor/torrc.sample

RUN chmod 700 /hidden_service/
RUN chmod +x /services.sh

EXPOSE 80

ENTRYPOINT ["/services.sh"]

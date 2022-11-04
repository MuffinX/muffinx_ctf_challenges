#!/bin/sh
httpd
nohup mysqld --skip-grant-tables --bind-address 0.0.0.0 --user mysql > /dev/null 2>&1 &
sleep 3 && mysql -u root < /database/database.sql
tor

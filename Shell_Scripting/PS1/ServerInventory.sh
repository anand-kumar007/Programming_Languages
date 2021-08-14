#!/bin/bash

<<c1
 say following info i need and i'll form a csv file out of that
 server name
 ip address
 uptime
 python version
 web_server
 web_server_version
 tomcat --> if present
 weblogic
c1

Server_name=$(uname -n)
IP_Address=$(ifconfig | grep inet | awk 'NR==1{print $2}')
OS_Type=$(uname)
UPTIME=$(uptime | awk '{print $3}')
# ie in hour


#-----------creating header for csv file

echo "S.No., ServerName, IP, OS, UPTIMING" > serverInfo.csv

echo "1, $Server_name, $IP_Address,$OS_Type,$UPTIME" >>serverInfo.csv

#double indirection sign so that it doesn't override


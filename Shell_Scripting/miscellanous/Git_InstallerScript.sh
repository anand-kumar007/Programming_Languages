#!/bin/bash

GREEN="\033[0;32m"
NC="\033[0m"

<<c1
a simple script to install git and other software in UBUNTU

The main difference between the two is that su command switches
to the super user – or root user – when you execute it with no 
additional options. ... Sudo runs a single command with root privileges – 
it doesn't switch to the root user or require a separate root user password
c1

#note -ne or -gt etc needs integer args

if [ $(whoami) != "root" ]
then
	echo -n "Login as Root first "
	echo -ne "${GREEN} ==>  run sudo -s or sudo -i <== ${NC}"
	echo -e "to login as root"

fi

# OR checking the id means if he is runnig the command(script here) with root privileges

if [ $(id -u) -ne 0 ]
then
	echo "run command with root priveleges atleast"
	exit 1
fi

echo -e " \033[0;32m accepting everything to yes during installtion \033[0m"

#note you can run this single command as sudo cmdName (ie with root privileges your id will be 1 for that cmd)

echo -e "\033[0;32m --------------------INSTALLING GIT----------------------\033[0m"
apt install git -y
echo -e "\033[0;32m --------------------INSTALLING VIM EDITOR----------------------\033[0m"

apt install vim -y




#!/bin/bash

<<c1
1. user define -- defined by you
2. system or env variable
	already there in the system.

	use env coomand to see all the system vaiables
c1

echo "all system variables are capital"
echo "--------------use env OR printenv to see all-----------------"

env | head -n 20

echo "---------------------------------MORE ABOUT ECHO COMMAND--------------------"

echo "this is used with -ne options and various symbols combinations \t\b\r\a \\\n etc"

echo "--"

echo "color with echo "

echo -e "\033[0;35m Hello i am in purple\033[m "	

echo "-----------read command with msg ----------------"

echo "use read -p 'your custom msg ' variableName "

read -p "Enter your Name : " name

echo "Welcome $name"





#!/bin/bash

echo "This is the use of if condition with taking input from cmd line arg"

echo "cmd arg are passed just after (in same line) running your script"

echo "enter the two number to add "


a=$1
b=$2

# calculate the total eneterd cmd arg count

echo "total entered cmd arg count is done using dollarHash"


args=$#
if [ $args -eq 2 ]
then
	echo "sum is : $((a+b))"
elif [ $args -gt 2 ]
then
	echo "pls enter only two cmd args"
else
	echo "pls enter 2 cmd args"

fi


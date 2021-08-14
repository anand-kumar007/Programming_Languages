#!/bin/bash
<<c1
a script to send automatic email alert when RAM memory gets low !!

free -mt | grep Total: 
Total:        19212        1904       15209

need the free column value only

free -mt | grep Total: | awk '{print{$4}'

under single quotes only
Now you have free space with you specified in MB

Also if you dont have sendmail command on your system

You may need to install it first and configure on your system

c1



TO="anandk8873@gmail.com"
free_ram=$(free -gt | grep Total: | awk '{print $4}')

if [ $free_ram -le 17 ]
then
	echo "sending mail since FREE RAM IS LOW(<15)"
	echo "Subject:LOW RAM !! body: check your system" |sendmail $TO
else
	echo "enough available (>15) RAM"
fi






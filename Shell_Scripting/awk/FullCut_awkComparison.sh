#!/bin/bash
<<c1
used for slicing of file or lines in output
awk always works on cols but cut can work with character 
and bytes as well

-F -- field seperator in awk
-d -- in cut
c1

echo "cut command can also work with char and bytes not only cols like awk"

cut -c 2 /etc/passwd | head -n 10

echo "using awk now See we can't get individual char or bytes"

awk -F ':' '{print $1}' /etc/passwd | head -n 10


echo "grabbing field using cut command "

cut -d ':' -f 3,2 /etc/passwd | head -n 10


echo "more about cut command"

cut -c 1-3,5-7 /etc/passwd | head -n 5

echo "-----------------------"
cut -d ':' -f 3,1 --output-delimiter="^" /etc/passwd | head -n 10

echo "---------------------------------"
echo "HOW TO IGNORE THOSE LINE WHICH DOESN'T HAVE DELIMITER"
echo "check demo.txt"

<<c3

cut -d ":" -f 1,2,3 demo.txt
root:x:0
daemon:x:1
bin x 2 2 bin /bin /usr/sbin/nologin

c3

cut -d ":" -f 1,2,3 demo.txt 

echo "igonoring using -s option"

cut -s -d ":" -f 1,2,3 demo.txt


echo "---------------------------"
echo "complemetn option in cut "

cut --complement -s -d ":" -f 1,2,3 demo.txt

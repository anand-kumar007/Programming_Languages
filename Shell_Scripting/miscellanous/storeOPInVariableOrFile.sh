#!/bin/bash
<<c1
variable defined in script are not accessible in terminal
and vice versa

variable defined in terminal are accessible until you reopen the 
teminal again bcz they are store in RAM once you close the terminal
your RAM will refresh and so does the previous varibles will be lost

so if neede you can store your output or variable from terminal
to some file using either tee command or the indirection opertor

command > file.txt
command | tee file.txt
c1

<<c2
to store the output of command in varible use backtick `command` or 
the $(command)
c2

myvar=`ls -lrt | head -5`
echo "------> $myvar "

var2=$(pwd)
echo "Your current Directory is : $var2"

<<c3
outputting to a file
c3

echo "storing the ls command output to output.txt file"
ls -lrt > output.txt

<<c4
a bit more usage of this
c4

todays_date=$(date +"%y/%m/%d")

fileName=${todays_date}.txt

mkdir $fileName



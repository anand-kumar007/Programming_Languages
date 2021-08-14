#!/bin/bash
echo -e "\033[0;32mEVERYTHING IN SHELL SCRIPT IS STRING X=3.4 X=1 ETC ARE ALSO STRING\033[0m"
x=10
echo "$x"
echo "$y"
y=20
echo "$y"

<<c1
_____________________________________________________________
 by default variable values is empty that variable is not defined
 no space should be given on either side of the = sign that's a syntax erro
 x= 23, x =23, x = 23 all three are wrong!
c1

<<haha
this is the sytax for multiline comment!!
haha

str="hello"
echo $str

<<c3
____________________________________________________________
if string name contains space need to surround it around the 
double quotaion 
c3

<<c4
-----------------Rules to define Variables----------------

1. The name of variable can only contain letters (a to z or A to Z),
numbers(0-9), and underscore character (_).
2. should be starting with letters or underscore(_)


________Shell Scripting is a case sensitive language_______
c4

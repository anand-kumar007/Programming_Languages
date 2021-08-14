#!/bin/bash

read -p "enter a : " a
read -p "read b : " b

echo "$a $b" | awk '{x=$1; y=$2 ; print "x = "x,"y= "y}'

<<c1
its use is when you don't have bc caclc on your host
then arithetic floating caluclation cannot be performed

so it is recommended to use awk and read for performing
arithmetic calcuation
c1

echo "$a $b" | awk '{x=$1;y=$2; print x/y}'

# using the -v symbol also
echo "usign -v to define varible in awk "
awk -v x=$a -v y=$b 'BEGIN{ print "x :"x,"y :"y}'

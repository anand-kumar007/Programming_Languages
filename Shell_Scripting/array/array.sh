#!/bin/bash

RED="\033[0;31m"
GREEN="\033[0;32m"
NC="\033[0m"

#make sure to use  -e with echo since has \
<<c1

 We will see= creating and some manipulation with the array 
c1

x=(10 20 30)

echo "x is an array : ${x[@]}"

todayDate=$(date)

echo -e "this date is ${RED} variable ${NC}-- $todayDate"

NOW=($(date))

echo -e "this time its ${RED} array date ${NC}--${NOW[@]}"


echo -e "total element in date array : ${RED} ${#NOW[@]} ${NC}"

ls_array=($(ls))

echo -e "ls ${RED} output first element ${NC} in array ${ls_array}"

echo -e "ls full output ${GREEN} \n ${ls_array[@]} "

# see this green color would be carried to next echo 

echo -e "toatl ${RED}element ${NC} in pwd are : ${RED} ${#ls_array[@]} ${NC}"

echo -e "simply use wc command also to get count of total items in ls"

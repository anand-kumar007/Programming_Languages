
# Write a shell script to obtain user's name and ages as input and print
# year when the user would become 50 years of age.

#!/bin/bash

echo "Enter Name : "

read Name

echo "Enter Age : "

read Age


let yearNeeded=(50- $Age)

CUR_YEAR=`date +"%Y"`

let FiftyYear=yearNeeded + $CUR_YEAR

echo -n "hello $Name You'll become 50 years @ $FiftyYear"

exit 0

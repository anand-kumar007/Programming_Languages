#!/bin/bash

<<c1

caret(^) and dollar($)
^ to match at starting and $ at the last matching

s for replacing 
d for deleting 
-i for permanent change to file(flag)
i for inserting the lines 

c1

echo -e "\n---------------\nput in a line\n------------------\n"
sed -n '/put/p' exmp.txt

echo -e "\n---------------\nput at beginning\n-------------------\n"
sed -n '/^put/p' exmp.txt 

echo -e "-----------------\npot in a line\n----------------------\n"
sed -n '/pot/p' exmp.txt 

echo -e "\n------------------\npot at end of line\n----------------------\n"
sed -n '/pot$/p' exmp.txt 

<<c2
Replacing or substituting string : Sed command is mostly used to replace the text in a file. The below simple sed command replaces the word “unix” with “linux” in the file.

$sed 's/This/These/' exmp.txt

c2

echo -e "\n----------------replacing this with these with s symbol------------\n"
sed 's/This/These/' exmp.txt

echo -e "\n----------Deleting the empty line---------\n"

sed '/^$/d' exmp.txt 

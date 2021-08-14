#!/bin/bash

<<c1
sed command is used for
	viewing file content
	searching
	find and replace
	insertion deletion
also supports regex for pattern matching

syntax :
	sed [options] 'commands' filetowork
c1

echo "insertion deletion using sed command"
echo "flags are i(insert before particular line no) a(insert after) d(delete)"

<<c2
cat employee.txt 
1	anand	87000
2	jishan	4500
3	kadir	8233
4 	pavan 	87654
c2

echo "adding header to emplyee.txt"

sed '1i S.No Name Salary' employee.txt

echo "   "
sed '1i ---------------' employee.txt

echo "  "
sed '3a $$$$$$$$' employee.txt

echo "  "
echo "adding -i to make changes permanent to file"

echo "  "

sed "Insering line after jishan this is permanent to file"

sed -i '/jishan/a i am the boss here' employee.txt

echo "  "

echo "deleting the inserted line using d"

sed -i '3d' employee.txt


echo "  "

#echo "deleting the line that has kadir"

#sed '/kadir/3d' employee.txt

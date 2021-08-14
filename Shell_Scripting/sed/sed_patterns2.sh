#!/bin/bash

<<c1

[] ---> match any single char in list [aeiou] any of them
{} ---> matches for required number of repetations
        > \{i\}
        > \{i,j\}
        > \{i,\}
() ---> This will search for zero or more whole sequence
        group matching

        >put\+ --> look for only put string
        >\(put\)\+ look for put or putput or putputput...
c1

echo -e "\n-------------------\n"
echo -e "using the [] "
echo "Only ou containing lines"
echo -e "\n-------------------\n"

sed -n '/[ou]/p' exmp.txt 

echo -e "\n-------------------\n"
echo "starting with p ending with t in btwn a-o"
echo -e "\n-------------------\n"

sed -n '/p[a-o]t/p' exmp.txt

echo -e "\n-------------------\n"

sed -n '/p[a-ch-im-q]/p' exmp.txt 

echo -e "\n-------------------\n"

echo "printing those lines which has s 3 or more using {}"
# \{num\} is syntax
sed -n '/This\{3\}/p' exmp.txt 

echo "only 3 times means after three s have space"

sed -n '/This\{3\}\b/p' exmp.txt 

echo "either 3 or 4 times"

sed -n '/This\{3,4\}\b/p' exmp.txt 

echo "3 or more times"

sed -n '/This\{3,\}\b/p' exmp.txt 


echo -e "\n-------------------\n"
echo "using the group matching ()"

echo "looking for pattern asdfasdf ie asdf two times"
sed -n '/\(asdf\)\{2\}/p' exmp.txt 

echo -e "\n-------------------\n"

echo "asdf one or more time"
echo -e "\n-------------------\n"

sed -n '/\(asdf\)\+/p'  exmp.txt 

echo -e "\n-------------------\n"

echo "asdf as word"

sed -n '/\b\(asdf\)\+/p'  exmp.txt 

echo -e "\n-------------------\n"

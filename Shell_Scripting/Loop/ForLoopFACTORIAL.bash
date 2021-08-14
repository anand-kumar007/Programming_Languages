
 #!/bin/bash

 #find the factorial of N(user input)

 printf "%s\n" "------------Factorial Program-------"
 printf "Enter a  Number : "

 read N
 fact=1
	
 for i in $(1 .. $N)
  do
     # fact=`expr $fact \* $i`
     fact=$[$fact*$i]  
  done

 printf "%s\n" " $N != $fact"

  

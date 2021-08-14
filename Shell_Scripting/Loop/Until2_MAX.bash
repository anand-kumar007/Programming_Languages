
   #!/bin/bash

   #for printing until anyof two variable is less than MAX

   echo "-------------COMPARISON-------------"

   echo enter a
   read a
   echo enter b
   read b

   echo "Enter MAximum : "
   read MAX

   #a=1
   #b=-3 

   until [[ $a -gt $MAX || $b -gt $MAX ]]
   do
	   echo "a = $a | b = $b"
   
	   a=$(($a + 2))

	   ((b++))
   done



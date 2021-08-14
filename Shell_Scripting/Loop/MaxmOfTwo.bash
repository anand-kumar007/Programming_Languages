
#!/bin/bash
   
   echo -n "enter X : "
   read x 
   echo -n "enter Y : "
   read y 

   if (($x > $y)); then 
      echo "X is greater than Y"

   elif (($x == $y )); then 
   echo "X is equal to Y"

   else 
   echo "X is less than Y"

   fi 



   # can use [[ $x > $y ]] also 


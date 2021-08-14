
   #!/bin/bash

   echo "Input the Number : "
   read Num

   a=1

   while [ $a -le 10 ]
   
   do 
     echo "$Num X $a = $[$Num*$a]"

     a=$[$a+1]

   done    

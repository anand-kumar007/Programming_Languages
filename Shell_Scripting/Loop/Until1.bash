
  #until loops executes until a certain condition is met

  # it is more or less like while loop only

  # it executes atleast once

  #!/bin/bash

  echo "------------TABLE----------"
  echo "Enter Number : "
  read N

 


  i=1
 
  # until [i -le 10] would be a wrong condition 
  # understand the meaning of until loop

  until [ $i -ge 10 ]
  do
	  echo "$N X $i = $[N*$i]"
	  ((i++))
  done




  #!/bin/bash

  echo -n "enter a number x (1<x<10) : "
  read N

  if [ $N -gt 1 ];
  then
	  if [ $N -ge 10 ];
	  then
		  echo "sorry Input the number btwn 1 and 10"
	  else
		  echo "$N * $N = $(($N*$N))"
	  fi
  else
	  echo "sorry Input the Number btwn 1 and 10"
  fi




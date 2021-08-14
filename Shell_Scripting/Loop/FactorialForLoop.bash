
  #just testing the random for loop things

  #/bin/bash
  
  echo "Enter N : "
  read N

  
  fact=1
  for((i=1;i<=$N;i++))
  do 
	  fact=$[$fact*$i];
  done

  echo $fact


 #!/bin/bash

 # this is the syntax for one line while loop
 # while [ condition ]; do commands; done
 # OR

 # while control-command;do commands; done

 # script for displaying fibonacci series

 t1=0
 t2=1
 t3=-1

 echo "enter How many Fibonacci numbers you want : "
 read N

 echo -e "fibonacii seires till $N is :\n "

 i=1

 while [ $i -le $N ];do echo -n "$t1 "; t3=$[$t1+$t2]; t1=$[$t2]; t2=$[$t3]; i=$[$i+1]; done

 #this is for good o/p formatting
 echo " "

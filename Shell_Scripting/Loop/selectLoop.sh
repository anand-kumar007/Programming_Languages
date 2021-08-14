#!/bin/bash

<< haha
very useful for menu driven programs
haha
echo "enter two numbers in cmd args : "
a=$1
b=$2

select opt in Addition Subtraction Multiplication Division Quit
do 
        case $opt in
        Addition)
        echo "sum is : $((a+b))"
        ;;

        Subtraction)
        echo "minus is : $((a-b))"
        ;;

        Multiplication)
        echo "multiply is : $((a*b))"
        ;;


        Division)
        echo "one divided by 2nd is : $((a/b))"
        ;;

	Quit)
		echo "thanks for using shell scripting calculator"
		exit
		;;
       *)
        echo "Invalid choice"
        
	;;
esac	
done


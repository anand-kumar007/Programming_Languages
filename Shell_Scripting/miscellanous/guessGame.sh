
#!/bin/bash

echo "you have three chances to guess the number int(between 0 and 32767) : "
myNum=$RANDOM
flag=10

for i in 1 2 3
do
	echo "chance $i : "
	read num
	if [ $num -eq $myNum ]
	then
		echo "great You guessed correctly"
		flag=1
		break
	fi
done

if [ $flag -gt 1 ]
then
	echo "You lost!!"
fi


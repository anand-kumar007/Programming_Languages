#!/bin/awk -f

#for initializing variable in awk best place is BEGIN

#BUT we are not doing that here to it shorten the long

#syntax of awk command to

# awk ' pattern/condition {} END {} filename

# command | awk ' patt/cond {} END {}'

#since reading from the command line

# only way is either in terms of file or from command output

# echo "2 5" | awk '{print "a = "$1, "b = " $2}'

BEGIN {
print "Reading a and b"
}
{
	a=$1
	b=$2
	print "a="a, "b="b
}
 END {
	print "Done"
}

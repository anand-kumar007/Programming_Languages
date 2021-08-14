
BEGIN {

print "Users and thier corresponding home"

print " UserName \t HomePath"

print "___________ \t __________"

FS=":"

}

{

print $1 "  \t  " $6

}

END {

print "The end"

}

# use it like awk -f thisFileName /etc/passwd

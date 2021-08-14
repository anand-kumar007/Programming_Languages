#!/bin/bash
GREEN='\033[0;32m'
NC='\033[0m'

echo -e "${GREEN} Syntax :"
echo -e	"awk options 'pattern/condition {action}'filename "
echo -e	"commanad | awk options 'pattern/condition {action}' "

echo -e	AWK can take the following options
echo -e	-F fs To specify a field separator
echo -e	-v var=value To declare a variable 

echo -e	-f file To specify file that contains awk script/
	
echo -e awk 'BEGIN {start_action} pattern/condition {action} END {stop_action}' filename

echo -e sometime this may be much lengthy so we store it in awk file and run :

echo -e awk -f awk_script.awk filename

echo -e "${NC}"

awk ' ' /etc/passwd

awk 'BEGIN{print "OK"}' /etc/passwd



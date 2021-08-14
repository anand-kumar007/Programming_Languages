#!/bin/bash

RED='\033[0;31m'
NC='\033[0m' # No Color
# if using with echo make sure to use -e flag to \ in colors
<<c1
this script is to deal with path realted string
c1

path1="/tmp/apache-tomcat-8.7.0.tar.gz"


echo -e "${RED} Path is : $path1 ${NC}"
echo "removing tar.gz from end using dollar{path1%tar.gz}"
echo "${path1%tar.gz}"
echo "-----------------------"

echo -e "${RED}Path is : $path1${NC}"
echo "removing /tmp/ from start using dollar{path1#/tmp/}"
echo "${path1#/tmp/}"
echo "-----------------------"



echo -e "${RED}Path is : $path1${NC}"
echo "removing .all from end using dollar{path1%.*}"
echo "${path1%.*}"
echo "-----------------------"


echo -e "${RED}Path is : $path1${NC}"
echo "removing double dots from end using dollar{path1%%.*}"
echo "${path1%%.*}"
echo "-----------------------"


echo -e "${RED}Path is : $path1${NC}"
echo "removing .all from start using dollar{path1#*.}"
echo "${path1#*.}"
echo "-----------------------"



echo -e "Path is : $path1"
echo "removing .all from start using dollar{path1##*.}"
echo "${path1##*.}"

echo "-----------------------"






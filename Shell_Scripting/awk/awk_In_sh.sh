#!/bin/bash

echo "awk is itself a commmand in shell script so can be used Like other linux command"

awk 'BEGIN {print "i am printed using awk"}'

a=$(awk -f InitializeVar.awk)

echo " i am using awk as output to variable :$a "

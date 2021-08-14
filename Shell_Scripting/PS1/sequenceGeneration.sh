#!/bin/bash

echo "You have seq or {} method to generate seq in terminal of shell"

seq 1 10
echo -e "seq start end \nseq start step end"
seq -10 3 -1

echo -e "braces notation {start..end}\n{start..end..step}"

echo {1..10}

echo {1..10..2}


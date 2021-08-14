#!/bin/bash

<<c1
 you can configure it according to your requiremnets
c1

echo "$PS1"
echo "[\u@\h\w] -->userName, host, working directory"
echo "use it if you wanna shorten it or display specifc things"

echo PS1="[\u -->\t]"
echo PS1="[\w -->\t]"
echo PS1="[\h -->\t]"

echo PS1="[\# -->\@]"


<<c2
there are many others symbols that can be used inside psq
@,v,w,#,t etc
c2



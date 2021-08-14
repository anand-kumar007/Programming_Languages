  #!/bin/bash

  echo -n "enter the user Name : "
  read name

  if [ $name = $USER ];
  then
	  echo "hello $name you are in system"
  else
	  echo "sorry you are not in the system"
  fi



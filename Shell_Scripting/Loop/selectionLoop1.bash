
  #!/bin/bash

  #select from the menu as 1,2 etc

  select DRINK in tea coffee water juice soda all none

  do
	case $DRINK in 
		tea|coffee|water|all)
		echo "50 rupees price"
		;;
	        juice|soda)
		echo "100 rupees price"
		;;
	        none)
		echo "OK BYE"
	        break
                ;;
	        *) echo "Invalid choice"
	        break;;
        esac

 done	

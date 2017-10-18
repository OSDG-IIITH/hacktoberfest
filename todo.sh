  #!/bin/bash
  
  if [ "$1" == "-A"]
  then
          echo "$2 $3" >> todo.txt
  elif [ "$1" == "-T" ]
  then
        echo "$(`cat -n todo.txt | head -5`)"
  elif [ "$1" == "-W" ]
  then
          echo "$(`cat -n todo.txt`)"
  fi
  
  
 
  
  
 
 #elif [ "$1" ==  "-P" ]
 #echo "$(`cat todo.txt | cut -d " " -f 3 | sort` )"
  
  
~                                                                                                                                                    
~            

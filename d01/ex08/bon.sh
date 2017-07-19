ldapsearch -Q sn=*bon* | grep "search:" | cut -d : -f 2 | sed "s/[[:space:]]//g" 

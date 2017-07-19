ldapsearch -LLL "(uid=z*)" | grep "cn:" | sort --ignore-case -r | cut -c5-

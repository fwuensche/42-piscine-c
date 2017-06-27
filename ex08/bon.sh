echo `ldapsearch -Q -LLL "(sn=*bon*)" | grep "uid:" | wc -l`

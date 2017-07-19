echo `cat /etc/passwd | grep --invert-match "^#" | awk 'NR%2==0' | cut -d : -f 1 | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2"` | sed 's/ /, /g' | tr '\n' .

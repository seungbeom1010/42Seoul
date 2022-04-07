cat /etc/passwd | grep -v '#' | awk 'NR%2==0' | cut -d ':' -f 1 | rev | sort -r | awk -v L1=$FT_LINE1 -v L2=$FT_LINE2 'NR >= L1 && NR <= L2' | xargs | sed 's/ /, /g' | sed  's/$/./g' | tr -d '\n'

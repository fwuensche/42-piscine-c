ifconfig | grep '..:..:..:..:..:..' | sed "s/ether//" | sed "s/[[:space:]]//g"

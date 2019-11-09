#/bin/sh
IP=$(ifconfig | grep "inet " | grep -v '127.0.0.1' | cut -d ' ' -f2 && echo "\n")
printf "$IP" | grep ^ || echo "I am lost!"

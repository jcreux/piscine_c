#!/bin/sh
cat contacts_hard.txt | grep -i 'bauer' | grep -v '78097' | grep -v 'Nhicholhas' | rev | cut -d ' ' -f2 | rev

#!/bin/sh
i=$(stat -f "%a" bomb.txt)
echo $(($i - 1))

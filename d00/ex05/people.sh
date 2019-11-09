#!/bin/sh
ldapsearch -xLLL uid=z* cn | grep "cn" | sort -rf | cut -c5-100

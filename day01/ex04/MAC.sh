#!/bin/bash
ifconfig -a | grep "ether" | cut -f 2 | sed -e 's/ether//g' | sed -e 's/ //g' 


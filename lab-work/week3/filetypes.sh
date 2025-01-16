#!/bin/bash
for arg in "$@"
do
	if [[ -d $arg ]]
	then
		echo "mydir"
	elif [[ -f $arg ]]
	then
		echo "myfile"
	else
		echo "hello"
	fi
done

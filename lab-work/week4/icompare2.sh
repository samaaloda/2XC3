#!/bin/bash
if [[ $1 =~ ^[\+\-]?[^0][0-9]{0,9}$ ]]
then
	X=$(($1 * 2))
	echo $X
elif [[ $1 =~ 0 ]]
then
	echo $1
else
	echo "An Error" >&2
fi

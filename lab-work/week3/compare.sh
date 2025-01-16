#!/bin/bash
if [[ $1 > $2 ]]
then
	echo "$2"
elif [[ $1 < $2 ]]
then
	echo "$1"
else
	echo "An Error" >&2
fi


#!/bin/bash
if [[ $1 -lt $2 ]]
then
        echo "$1"
elif [[ $1 -gt $2 ]]
then
        echo "$2"
else
        echo "An Error" >&2
fi

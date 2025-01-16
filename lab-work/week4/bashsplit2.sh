#!/bin/bash
if [[ $1 == "" ]]
then
        while read line
        do
                for word in $line
                do
                        if [[ $word =~ ^[a-zA-Z]+$ ]]
                        then
                                echo "$word"
                        fi
                done
        done
else
        echo "No arguments allowed." >&2
        exit 1
fi

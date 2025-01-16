#!/bin/bash

echo "There are $(cat $1 | wc -l) words in $1"
X=$(cat $1 | grep -P "^[a-zA-Z]{$2,$3}$" | wc -l)
echo "There are $X words between $2 and $3 characters long."


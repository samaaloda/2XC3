#!/bin/bash

# define a function
hello() {
	local NAME='Sam'
	echo "Hello, $1!"
	echo "$NAME"
	return 0
}

hi() {
        echo "Hi, $1!"
        return 0
}

how() {
	echo $NAME
}

# call the function
NAME='Sama Al-Oda'
hello $NAME
hi $NAME
how

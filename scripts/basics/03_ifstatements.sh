#!/bin/bash

mynum=200

if [ $mynum -eq 200 ]; then # putting a ! in front of variable negates it, u can also use -ne
  echo "the numbers are equal!"
else
  echo "the numbers are not equal"
fi

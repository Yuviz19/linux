#!/bin/bash

myVar=1

while [ $myVar -le 10 ]; do
  echo $myVar
  ((myVar++)) # myVar=$((myVar + 1)) a new variable can be created and hence overwritten
  sleep 0.5
done

#!/bin/bash

for current_number in {1..10}; do
  echo "$current_number"
  sleep 1
done

echo "This is called from the outside of the loop.."

#!/bin/bash

for file in logFile/*.log; do
  tar -czvf "$file.tar.gz" "$file"
  # Create a compressed file named "$file.tar.gz" out of the original file "$file"
  # -create -gzip -verbose -filename
done

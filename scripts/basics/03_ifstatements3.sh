#!/bin/bash

# installing htop, if not present

command=htop

if command -v $command; then # to check if a command exists
  # note that now we do not need brackets
  # this is because brackets are only needed when we use a test command
  # use 'man test' on terminal to learn more
  echo "$command is Available, let's run it..."
else
  echo "$command is NOT Available, installing it..."
  sudo dnf install -y $command
fi

$command

#!/bin/bash

release_file=/etc/os-release

# fedora based system
if grep -qi "fedora" $release_file; then # -q is the quite mode (not printing anything on the screen)
  sudo dnf upgrade --refresh
fi

# debian/ubuntu based system
if grep -qi "debian" $release_file || grep -qi "ubuntu" $release_file; then
  sudo apt update
  sudo apt dist-upgrade
fi

# arch based systems
if grep -qi "arch" $release_file; then
  sudo pacman -Syu
fi

# .. more can be added

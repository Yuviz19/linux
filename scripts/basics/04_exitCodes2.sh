#!/bin/bash
# run this script with sudo privallage

package=htop

sudo dnf install -y $package >>package_install_result.log 2>&1

if [ $? -eq 0 ]; then
  echo "The installation of $package was successfull!"
  echo "The new command is available here: "
  which $package
else
  echo "$package failed to install" >>package_install_failure.log
fi

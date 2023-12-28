#!/bin/bash

# Check if a filename is provided as an argument
if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

# Set the path to your Git repository
repo_path="/alx-low_level_programming/testing"

# Navigate to the Git repository
#cd "$repo_path" || exit

# Git commands
git add .
git commit -m "Add $1"

# Set up Git credentials
#git_credentials() {
    #echo "Enter your Git username:"
    #read -r username
    #echo "Enter your Git password or access token:"
    #read -r -s password
   #echo
#}

#git_credentials

# Run git push with credentials
git push origin master

# Clean up credentials
#unset username
#unset password


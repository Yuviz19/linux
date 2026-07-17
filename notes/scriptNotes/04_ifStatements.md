# IF STATEMENTS

```bash
#!/bin/bash

mynum=200

if [ $mynum -eq 200 ]; then # putting a ! in front of variable negates it, u can also use -ne
  echo "the numbers are equal!"
else
  echo "the numbers are not equal"
fi
```
- other checks are 
  - gt (for greater then)
  - gte (greater than equal to)
  - lt (less than)
  - lte (less than equal to)

- to check if a file exits or not 
  - use "-f path/to/file"
  - for a directory use -d

```bash
#!/bin/bash

if [ -f ~/Downloads/images.jpg ]; then
  echo "the file exists"
else
  echo "the file doesn't exists"
fi
```
- running commands

```bash
#!/bin/bash
# installing htop, if not present

command=/usr/bin/htop
if [ -f $command ]; then
  echo "$command is Available, let's run it..."
else
  echo "$command is NOT Available, installing it..."
  sudo dnf install -y htop
fi

$command
```

# EXIT CODES 

- they determine that if a command executed was succesfull or not
- to know the exit code of the most recent command
  - echo $? 
  - if 0 is return -> success
  - anything else -> faluire

- to force an exit code 
- 'exit _code_' -> this will make the final exit code as numeric exit code and exits the program
  - now no line of bash runs after this

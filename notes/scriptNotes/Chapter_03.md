# Writing First Bash Script

- a bash script is a file with series of bash commands, executed by BASH (Bourne Again Shell)
- eg.

```Shell
name="void"
echo "hello $name"
```

- use a " " for echo
- then run it with 'bash file_name'

## File Permissions

- 'chmod' -> this command is used to change the mode of a file,

- by default not all files are executable
  - 'chmod +x file_name.sh' -> to add the executable bit to the permissions of a file
  - now the file can be run directly by ./file_name.sh

- why './'
  - since the scripts are not in the $PATH variable
  - we tell the OS to look into the current directory

- SHEBANGS

- At the top of the file, use -> "#!/usr/bin/env bash"
  - this tell the OS to 'use bash to interpret this file'

- now with a shebang, u can make a script without declaring it with an extension
  - .sh is generally a POSIX script
  - bash scripts usually end with .bash
  - so use a shebang and with no extension

## Looping

### Using a for loop

- for loops are generally 'for in' loops in bash

```bash
#!/usr/bin/env bash

for thing in foo bar baz bat; do
  echo "thing is $thing"
done
```

- loops for all the values provided
- do is used to start the loop body

> Some useful commands
> 'bash -n file_name' -> checks the file for any syntax error
> 'echo $?' -> returns the exit code for last used command (0 - success, else - failed)

## User Input

- use the 'read' command
- use -p flag for adding a prompt and provide a prompt in "..."
- then the shell will prompt the message and ask for value

- 'read -p "message" variable_name'

- u can pipe a value into a prompt command.
  eg. echo Void | ./03_greet > this skips the step of prompting

- this is a trick, where u can avoid giving yes to certain program
  by -> 'yes | some_command_that_asks_permissions'

### Passing values via command arguments

- './file_name arg1 arg2 ...'
- u can use it, store it as 'name=$1' - 1st argument provided, gets stored

- a better example

```bash
#!/usr/bin/env bash

if [[ -n $1 ]]; then
  name=$1
else
  read -p "Enter your name: " name
fi

echo "hello $name"
```

- using if statement -> if ....; then
- here inside double [], '-n $1' checks if 1st arg is set or not

- in the loops file
  - we can get the value of things via arguments too
  - for thing in "$1" "$2" "$3"; do...
  - or take all possible input arguments
  - for thing in "$@"; do... -> get an array expansion of the arguments

## Functions

- combining the greet and loop files

```bash
#!/usr/bin/env bash

# for name in "$@"; do
#   ./03_greet "$name"
# done

# we use local, because without it, the global variable is overwritten
greet (){
  local name=$1
  echo "hello $name"
}

for name in "$@"; do
  greet "$name"
done
```

## Conditionals

```bash
#!/usr/bin/env bash

a=1
b=2

if [[ $a == $b ]]; then
  echo 'a and b are the same'
elif [[ $a != $b ]]; then
  echo 'a and b are not the same'
fi

while [[ -f file.txt ]]; do
  echo 'file.txt exists and is a regular file'
done
# an infinite loop
```

- to get to know more about the conditions, run 'help test'
- u can also put commands into the if statements
  - and if they run, statement becomes true

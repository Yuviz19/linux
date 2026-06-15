# BASH

- What is Bash?
- Bash is a program that runs inside a terminal.
- it works as a REPL (read eval print loop)
  - it reads stuff from the input
  - evaluates it
  - prints the output on the screen
  - loop makes the process repeat
- "something like a python REPL"

- Where we are?

### Basic file manipulation 
  - Bash always exists inside a directory
- 'pwd' -> prints working directory
- 'ls' -> list all files in the directory
  - '-a' flag for checking hidden files/directories (a file starting with .)
  - '-l' used to list files and directory in descriptive format.

- 'touch' -> to create a file

- 'rm file_name' -> remove a file
  - use something*.something to delete all instances of a file within that *
  - '-i' flag to remove stuff interactively 
  - there is no recycle bin here

- 'mkdir' -> make directory

- 'cd' -> change directory
  - 'cd .' -> remain in current directory
  - 'cd ..' -> go one directory back
  - 'cd -' -> takes to the last directory user was in

- 'mv' -> used to move a file/directory (Can be used to rename them)
  - don't change the name to an existing file name, it overwrites it and deletes the previous one

#### GREP
- 'grep' -> used to find the occurances/patterns from an input stream (the pattern shows the whole line where it lies)
  - 'grep pattern stream' -> this is case sensitive
  - 'grep 'pattern' stream' -> used for avoiding special characters
  - 'grep '^pattern' stream' -> if something starts with pattern
  - 'grep 'pattern$' stream' -> if something ends with pattern
  - 'grep -A1 pattern stream' -> show one line after the pattern line (with the pattern line)
  - 'grep -B1 pattern stream'
  - 'grep -C2 pattern stream' -> get context.. One line after and before
  - '-i' flag for case insensitive 
  - '-o' flag for getting just the part that matched, pattern = '^d.' -> starts with d and one character after it

- '>' and '>>' - these are used to redirect the output of some command to a file
  - '>' used to overwrite the file completely
  - '>>' used to append
  - 'echo hello >> file.txt' - creates a file if doesn't exists

#### PIPING
- this is the process of sending one command's output to another command's input
  - eg -> cat hello | grep hi

#### PAGER
- a program that pages through the output
  - less (j,k - up,down)
    - / to search -> n for next and SHFT + N for previous
    - q to exit

  - more is the same as less


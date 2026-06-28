### MAN PAGES

- also called as manual pages
- they store descriptions about almost all linux/unix commands
  - they generally open in a pager (generally in less)
- man pages are divided into section

  1 Executable programs or shell commands
  2 System calls (functions provided by the kernel)
  3 Library calls (functions within program libraries)
  4 Special files (usually found in /dev)
  5 File formats and conventions, e.g. /etc/passwd
  6 Games
  7 Miscellaneous (including macro packages and conventions), e.g. man(7), groff(7), man-pages(7)
  8 System administration commands (usually only for root)
  9 Kernel routines [Non standard]

- so for example if u want to get the definition of c function printf and not the command printf,
  - u can 'man 3 printf' -> to search in section 3 (which are c Library files)

---

- some commands are not external, they are built-into the shell
  eg history, cd, kill, log...
- so instead of using man, use the bash way that is 'help command'
- for external commands, use 'which' to get the location of the command (where it exists)
- this does not work for built-in commands
- to list all the built-in commands use 'compgen -b'

- use the 'type' command to check what type a certain command is
  - 'type -a' is used to get all the details of the command
- 'echo' is the command that is both built-in and external

### Other Commands & Environment Variables

- 'file file_name' -> what kind of a file a certain file is

- Environment Variables are -> they are dynamic named value pairs stored by shell or OS that are used while running a program

  | Variable | Purpose |
  | -------- | ------------------------------------------------ |
  | `PATH` | Directories where executable programs are searched |
  | `HOME` | Current user’s home directory |
  | `USER` | Current username |
  | `SHELL` | Current shell program |
  | `PWD` | Current working directory |
  | `LANG` | Language/locale settings |

- use 'echo $EV' to get the results -> the PATH Variable give colon ':' separated values,
  - use 'echo $PATH | tr : '\n' ' to modify (translate)

- the path variable lets the system know where a certain command is and then execute it
- 'whoami' -> returns the user that is logged in

- making shell variables (lived until the session exists)
  - 'name=void' then 'echo $name'
  - setting dynamic values for variable 'var=`echo hello`' (with backticks)
    --- newer syntax
  - 'var=$(command)'

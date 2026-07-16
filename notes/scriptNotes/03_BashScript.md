# BASICS

- What is a Bash Script?
  - it is basically a text file, that has commands written into it.

- they have a .sh extension (which is optional)
- to run a shell file, you need to change the permissions of the file
  -> sudo chmod +x file_name (changes the execution bit)

- to run a script file
  -> ./file_name (file extension is also optional)

## SHEBANG

- #!/bin/bash
- this tells the file that, which interpreter is intended to run this script
- this diffentiates an executable from others

## SCRIPTS

1. printing on the screen
  - u can use "echo 'Hello World'" to print something on the screen (on a new line)

2. variables
  - they are used to store info for later use
  - declaration -> myname="void" (use "" for best practice {for special characters})
  - to print/use it -> echo $myname -> for variables a dollar is used

  - note that on a bare terminal session
  - the declared variables are only lived till the session exists

  - in scripts, when echo-ing stuff with variables, use double qoutes ""
  - with single quotes the variable names gets printed

  - to set a variable to equal to the output of some command
  - eg. files=$(ls)
  - this uses a program called a subshell
    - which executes the program in the background and stores in the variables

3. basic maths
  - on the terminal we can calculate math expressions with 'expr' command followed by the numbers
  - they also work with variables 
  - note for multiplication - expr 100 \* 3 - is valid 
  - since * presents a spacial purpose we need an escape sequence

  - the (( )) syntax (Arithmatic Expansion)
    - used to do maths in bash

```bash
#!/bin/bash

# Basic addition
sum=$((10 + 5))
echo "10 + 5 = $sum"

# Variables
a=20
b=10
result=$((a * b))
echo "20 * 10 = $result"

# Incrementing
((a++))
echo "20 incremented is $a"
```

- the $(( )) syntax (Inline calculation)

```bash
echo "The answer is $((5 * 5 + 10))"

a=10
b=20

# Is a less than b? (Yes, so it returns 1)
is_less=$((a < b))
echo "Is 10 < 20? Result: $is_less" 

# Is a equal to b? (No, so it returns 0)
is_equal=$((a == b))
echo "Is 10 == 20? Result: $is_equal"
```
- the inline calc is useful with if statements (later covered)

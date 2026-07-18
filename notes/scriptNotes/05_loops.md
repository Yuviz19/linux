# LOOPS

- a loop performs a task untill when a particular condition is reached

## While Loop

```bash
#!/bin/bash

myVar=1

while [ $myVar -le 10 ]; do
  echo $myVar
  ((myVar++)) # myVar=$((myVar + 1)) a new variable can be created and hence overwritten
  sleep 0.5
done
```

## For Loop

```bash
#!/bin/bash

for current_number in 0 1 2 3 4 5 6 7 8 9 # the numbers are the set that the loop follows
do 
    echo $current_number
    sleep 1
done # always ending the loop with done statement

echo "This is called from the outside of the loop.."
```

- to make the set effective -> {1..10}
  - works fine

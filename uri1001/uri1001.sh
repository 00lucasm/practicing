
#!/bin/bash

read $A
read $B
X=0

let "X = $(( A + B ))"

echo "X = $X"

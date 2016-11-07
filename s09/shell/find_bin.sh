#!/bin/sh

if [ $# -eq 0 ]; then
  echo "Please supply binary you would like to find"
  exit 1
fi

found=false
for i in $(echo $PATH | tr ":" "\n")
do
   for j in $(ls $i | grep -Fx  $1)
   do
     if [[ "$j" == $1 ]]; then
       echo $j "is in" $i
       found=true
     fi
   done
done

if [ "$found" = false ]; then
  echo "No binary named" $1
fi

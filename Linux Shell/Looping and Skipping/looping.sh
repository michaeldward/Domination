#!/bin/bash
for i in `seq 1 99`
do
    echo $i
    if [[$(($i % 2)) -eq 0]]
    then
    echo $i
done
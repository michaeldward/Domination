#!/bin/python

import sys

aa = bb = 0

def compare(a, b):
    global aa, bb
    if a > b:
        aa = aa + 1
    elif b > a:
        bb = bb + 1
        
a0,a1,a2 = raw_input().strip().split(' ')
a0,a1,a2 = [int(a0),int(a1),int(a2)]
b0,b1,b2 = raw_input().strip().split(' ')
b0,b1,b2 = [int(b0),int(b1),int(b2)]

compare(a0, b0)
compare(a1, b1)
compare(a2, b2)

print aa, bb
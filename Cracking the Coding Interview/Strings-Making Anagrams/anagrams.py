"""
Problem: given two strings a and b, find the number of
letters that must be removed so that they contain the same
letters (not necessary in the same order).

Solution: put all letters from a into a_lst. Then loop through
b. If the letter in b is in a_lst, remove it from the list.
If it is not in the list, add it to b_lst. At the end, a_lst will
contain letters exclusive to a and b_lst will contain letters 
exclusive to b.
"""

def number_needed(a, b):
    a_lst = [] #to contain all of a, then remove shared with b
    b_lst = [] #to contain exclusive to b
    for lt in a: #loop through a
        a_lst.append(lt)
    for lt in b: #loop through b
        if lt in a_lst: #letter in both a and b; letter is shared
            a_lst.remove(lt)
        else: #letter in b but not a
            b_lst.append(lt)
    return len(a_lst) + len(b_lst)
            
        

a = raw_input().strip()
b = raw_input().strip()

print number_needed(a, b)


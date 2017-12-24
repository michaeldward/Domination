"""
Problem: given a list of words found in a magazine and
a list of words needed for a ransom note, find if the
ransom note can be made from the words in the magazine.

Solution: loop through the words in the magazine and
store them in a list. Then loop through the words in
the ransom note. If the word in the note is not found
in the magazine, the note cannot be made. If it is found,
remove it from the list and repeat.

Time efficiency: O(n^2)

Space efficiency: O(n)

ERROR: failed on test case #16 and #17

"""
def ransom_note(magazine, ransom):
    word_list = []
    for word in magazine:
        word_list.append(word)
    for word in ransom:
        if word in word_list: #word is found; remove from list
            word_list.remove(word)
        else: #word is not found; note cannot be made
            return False
    #did not return False already: note can be made
    return True
    

m, n = map(int, raw_input().strip().split(' '))
magazine = raw_input().strip().split(' ')
ransom = raw_input().strip().split(' ')
answer = ransom_note(magazine, ransom)
if(answer):
    print "Yes"
else:
    print "No"
    
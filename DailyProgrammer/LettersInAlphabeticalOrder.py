#https://www.reddit.com/r/dailyprogrammer/comments/3h9pde/20150817_challenge_228_easy_letters_in/

#Problem Explanation
#A handful of words have their letters in alphabetical order, that is nowhere in the word do you change direction in the word if you were to scan along the English alphabet. An example is the word "almost", which has its letters in alphabetical order.
#Your challenge today is to write a program that can determine if the letters in a word are in alphabetical order.
#As a bonus, see if you can find words spelled in reverse alphebatical order.
#I.E. almost - True, cereal - False


#Could do a one-line solution something like this:
# print word, "True" if word == "".join(sorted(word))
#Same with reversed part. But linear search below is quicker.

import sys

def inOrder(word):
        if len(word) == 1:
                return True
        prevL = 96 #a is 97
        for l in word:
                if l < prevL:
                        return False 
                prevL = l
        return True

print(inOrder(sys.stdin.readline().strip().lower()))

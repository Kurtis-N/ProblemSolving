Fix my phone, minion!
=====================

"She escaped? This can't be happening! Get me the security team!"

Professor Boolean, a notorious mad scientist, just found out his precious rabbit specimen has escaped! He rushes to call his security minions on the lab phone. However, the rabbit escapee hacked the phone to speed her escape! She left a sign with the following clues: Each digit that is dialed has to be a number that can be reached by a knight chess piece from the last digit dialed - that is, you must move precisely 2 spaces in one direction, and then 1 space in a perpendicular direction to dial the next correct number. You can dial any number you want to start with, but subsequent numbers must obey the knight's move rule. 

The lab phone has the numbers arranged in the following way: 1, 2, 3 in the first row; 4, 5, 6 in the second row; 7, 8, 9 in the third row; and blank, 0, blank in the fourth row. 

123
456
789
0 

For example, if you just dialed a 1, the next number you dial has to be either a 6 or an 8. If you just dialed a 6, the next number must be a 0, 1 or 7.

Professor Boolean wants you to find out how many different phone numbers he can dial under these conditions. Write a function called answer(x, y, z) that computes the number of phone numbers one can dial that start with the digit x, end in the digit y, and consist of z digits in total. Output this number as a string representing the number in base-10.

x and y will be digits from 0 to 9. z will be between 1 and 100, inclusive.

Languages
=========

To provide a Python solution, edit solution.py
To provide a Java solution, edit solution.java

Test cases
==========

Inputs:
(int) x = 6
(int) y = 2
(int) z = 5
Output:
(string) "6"

Inputs:
(int) x = 1
(int) y = 5
(int) z = 100
Output:
(string) "0"

Inputs:
(int) x = 3
(int) y = 7
(int) z = 1
Output:
(string) "0"

Use verify [file] to test your solution and see how it does. When you are finished editing your code, use submit [file] to submit your answer. If your solution passes the test cases, it will be removed from your home folder.

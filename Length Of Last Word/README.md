# Length Of Last Word
https://neetcode.io/problems/length-of-last-word/question?list=allNC

## Topics:
String

## Solutions
### Solution 1: using end pointer [optimal]
Example 1:

Input: s = "Hello World"

Output: 5
Explanation: The last word is "World" with length 5.

- start from the end of the string
- skip all the black space characters
- once we hit a alphabet character, we create a iteration variable
- we increment the iter variable until we get to another space
- return the pointer varibale

#### Complexity
- Time: $O(n)$
- Space: $O(1)$
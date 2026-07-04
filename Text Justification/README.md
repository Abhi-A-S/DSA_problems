# Text Justification
https://neetcode.io/problems/text-justification/question?list=allNC

## Topics:
Array, String, Simulation

## Solutions
### Solution 1: using floor division and mod [optimal]
Input: words = ["This","is","an","example","of","text","justification."], maxWidth = 16

Output: [
   "This    is    an",
   "example  of text",
   "justification.  "
]

- iterate over words, and keep adding them into a current line array until its length is less than maxWidth
- repeat this until its either exactly same as the maxWidth or goes over it
- if it getting filled exactly with words and spaces to maxWidth, add the current line to the result array, and go to next iteration
- if it goes over the maxWidth, then the word before current iteration is considered as the last of that sentence
- calculate the total number of remaining space based on the number of words corrently in the line
- find the floor: $min \; space \; length = \biggl\lfloor \dfrac {extra \; spaces} {no \; of \; words} \biggr\rfloor$
- find the additional spaces required in case of improper splitting: $rem = extra \; spaces \; \% \; no \; of \; words$
- now add each word and spaces into the line
- add line to the res, and then go to the next word in the iteration
- repeat the above until all the words are iterated over

#### Complexity
- Time: $O(n)$
- Space: $O(n)$
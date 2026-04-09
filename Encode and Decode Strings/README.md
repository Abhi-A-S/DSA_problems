# Encode and Decode Strings
https://neetcode.io/problems/string-encode-and-decode/question?list=blind75

## Topics:
Array, String, Design

## Recommended Time & Space Complexity

You should aim for a solution with O(m) time for each encode() and decode() call and O(m+n) space, where m is the sum of lengths of all the strings and n is the number of strings. 


## Solutions
### Solution 1: using string length and delimiter [optimal]
Input: strs = ["neet", "Coode"]
Output: s = "4#neet5#Coode"

idea:- use the string length with a delimiter, prefix that to the word

#### encoding
- find the length of the string
- prepend it to a delimiter, say "#"
- now append this to the beginning of the string
- do this all the strings in the list
- join all the strings into a single one

#### decoding
- get the length by stopping at delimiter
- get the substring based on the length
- append the substring to the list
- do this until you reach the end of the string

#### Complexity
- Time: $O(m)$
- Space: $O(m+n)$
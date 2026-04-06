# Valid Anagram

https://neetcode.io/problems/is-anagram/question?list=blind75

## Topics:
String, Hash Tables, Sorting

## Recommended Time & Space Complexity

You should aim for a solution with O(n + m) time and O(1) space, where n is the length of the string s and m is the length of the string t.

## Solutions
### Solution 1: using hash map [optimal]
ex:- s = "anagram", t = "nagaram"

idea:- count the number of occurances of each letter, if they are same
- iterate through the strings, add counts of each element into a hashmap
- compare the hashmaps
- if they are same, anagram
- else, they are not anagram

#### Complexity
- Time: $O(n + m)$
- Space: $O(1)$

### Solution 2: Sorting the string
ex:- s = "anagram", t = "nagaram"

idea:- sorted string will make the same alphabets be adjacent, check if the two sorted strings are the sane
- sort the strings s and t
- iterate over the sorted s and t check both have the same elements

#### Complexity
- Time: $O(n\log n)$
- Space: $O(1)$
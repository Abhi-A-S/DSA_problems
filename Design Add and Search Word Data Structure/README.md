# Design Add and Search Word Data Structure
https://neetcode.io/problems/design-word-search-data-structure/question?list=blind75

## Topics
String, Depth-First Search, Design, Trie

## Recommended Time & Space Complexity
You should aim for a solution with O(n) time for each function call and O(t + n) space, where n is the length of the string and t is the total number of nodes created in the Trie. 

## Solutions
### Solution 1: implement trie [optimal]
Input:
["WordDictionary","addWord","addWord","addWord","search","search","search","search"]
[[],["day"],["bay"],["may"],["say"],["day"],[".ay"],["b.."]]

Output:
[null, null, null, null, false, true, true, true]

Explanation:
WordDictionary wordDictionary = new WordDictionary();
wordDictionary.addWord("day");
wordDictionary.addWord("bay");
wordDictionary.addWord("may");
wordDictionary.search("say"); // return false
wordDictionary.search("day"); // return true
wordDictionary.search(".ay"); // return true
wordDictionary.search("b.."); // return true

main idea: trie implementation

- trie is used to hold the characters of a word in the form of a tree
- apple will become, (root) -> a -> p -> p -> l -> e -> (Null)

addWord into the trie:
- take each character in the string, make the first element a child of the root
- then every next character will become the child of the previous character

to seach for a word:
- start with the node and the first letter
- go to the child node and check next letter
- do this until all the characters and nodes are equal and the trie ends after the last element
- if satisfied return true
- if not return false
- in case of wildcard '.'
- we use backtracking to go back to previous node
- and then check every nodes to see if there is at least 1 word that satisfies the pattern


#### Complexity
- Time: $O(n)$
- Space: $O(n+t)$
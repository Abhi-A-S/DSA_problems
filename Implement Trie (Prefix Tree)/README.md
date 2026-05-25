# Serialize and Deserialize Binary Tree
https://neetcode.io/problems/serialize-and-deserialize-binary-tree/question?list=blind75

## Topics
Hash Table, String, Design, Trie

## Recommended Time & Space Complexity
You should aim for a solution with O(n) time for each function call and O(t) space, where n is the length of the given string and t is the total number of nodes created in the Trie. 

## Solutions
### Solution 1: implement trie [optimal]
ex:- 
Input:
["Trie", "insert", "dog", "search", "dog", "search", "do", "startsWith", "do", "insert", "do", "search", "do"]

Output:
[null, null, true, false, true, null, true]

Explanation:
PrefixTree prefixTree = new PrefixTree();
prefixTree.insert("dog");
prefixTree.search("dog");    // return true
prefixTree.search("do");     // return false
prefixTree.startsWith("do"); // return true
prefixTree.insert("do");
prefixTree.search("do");     // return true

main idea: trie implementation

- trie is used to hold the characters of a word in the form of a tree
- apple will become, (root) -> a -> p -> p -> l -> e -> (Null)

to insert a word into the trie:
- take each character in the string, make the first element a child of the root
- then every next character will become the child of the previous character

to seach for a word:
- start with the node and the first letter
- go to the child node and check next letter
- do this until all the characters and nodes are equal and the trie ends after the last element
- if satisfied return true
- if not return false

to implement starts with:
- check if node and the first letter is same
- go to the child node and second letter to see if they are same
- do this until the string ends
- if they were all matched and the nodes are done or reached null
- return true
- if not return false

#### Complexity
- Time: $O(n)$
- Space: $O(t)$
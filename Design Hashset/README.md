# Design Hashset
https://neetcode.io/problems/design-hashset/question?list=neetcode250

## Topics:
Array, Hash Table, Linked List, Design, Hash Function


## Solutions
### Solution 1: using arrays and chaining [optimal]
Input: ["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
[[], [1], [2], [1], [3], [2], [2], [2], [2]]

Output: [null, null, null, true, false, null, true, null, false]

idea:- using arrays and chaining to handle storage and collisions
- we are using arrays to hold the key values
- we take the key value and mod it by the size of the hash to get the storing index
- in case of collisions, it more than 1 element has same index value
- we use linked lists to hold those values
- every key value is stored as a node of a linked list
- if we get another key value with same index value
- we will append this node to the end of the linked list at that index value

searching an element in the hash set
- when searching for an element, we go find the index value for that key, and then traverse over the linked list to see if it exists

inserting an element in the hash set
- when finding the elements, we check the index position for the key, traverse overr the linked list
- if the key alredy exists, then we dont add it again
- if the key doesn't exist, we append it to the end of the linked list

deleting an element from the hash set
- check if the key exists in the hash set
- if it does, remove that node from the linked list

#### Complexity
- Time: $\Omega (1)$
- Space: $O(n)$
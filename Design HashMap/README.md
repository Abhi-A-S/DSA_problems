# Design HashMap
https://neetcode.io/problems/design-hashmap/question?list=neetcode250

## Topics:
Array, Hash Table, Linked List, Design, Hash Function


## Solutions
### Solution 1: using arrays and chaining [optimal]
Input: ["MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"]
[[], [1, 1], [2, 2], [1], [3], [2, 1], [2], [2], [2]]

Output: [null, null, null, 1, -1, null, 1, null, -1]

Explanation:
MyHashMap myHashMap = new MyHashMap();

myHashMap.put(1, 1); // The map is now [[1,1]]

myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]

myHashMap.get(1); // return 1, The map is now [[1,1], [2,2]]

myHashMap.get(3); // return -1 (i.e., not found), The map is now [[1,1], [2,2]]

myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)

myHashMap.get(2); // return 1, The map is now [[1,1], [2,1]]

myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]

myHashMap.get(2); // return -1 (i.e., not found), The map is now [[1,1]]


idea:- using arrays and chaining to handle storage and collisions
- using index as key, value is taken based on that index
- to handle collisions we will use chaining, where we store the values as a linked list

searching an element in the hash map
- to find the element we go to that index position and traverse the list and see if the value exists

inserting an element in the hash map
- to insert and element we find the index position and traverse the list and add the element at the end

deleting an element from the hash map
- to remove an element we find the index positiona and traverse the list to see if the element exists, if it does, we remove that node from the linked list


#### Complexity
- Time: $\Omega (1)$
- Space: $O(n)$
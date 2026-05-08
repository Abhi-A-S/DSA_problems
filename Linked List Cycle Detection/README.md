# Linked List Cycle Detection
https://neetcode.io/problems/linked-list-cycle-detection/question?list=blind75

## Topics
Hash Table, Linked List, Two Pointers

## Recommended Time & Space Complexity
You should aim for a solution with O(n) time and O(1) space, where n is the length of the given list. 

## Solutions
### Solution 1: floyd's tortoise and hare algorithm [optimal]
ex:- cycle = [1, 2, 3, 4]

- take two poiters, slow and fast
- increment slow by 1, and fast by 2
- if there was a cycle, the fast pointer will eventually meet the slow pointer
- if fast pointer becomes null, then it was a linear one


#### Complexity
- Time: $O(n)$
- Space: $O(1)$
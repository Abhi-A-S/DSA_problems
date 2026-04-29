# Best Time to Buy and Sell Stock
https://neetcode.io/problems/reorder-linked-list/question?list=blind75

## Topics:
Linked List, Two Pointers, Stack, Recursion

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(1) space, where n is the length of the given list. 


## Solutions
### Solution 1: using sliding window [optimal]
Input: linked list = [1, 2, 3, 4]
output: [1, 4, 3, 2]

- split the linked list into two parts
- the first part list is as it is
- the second part of the list is to be reversed

to split the linked list:
- use slow and fast pointers
- slow pointer starts at position 0 and increments by one
- fast pointer starts at position 1 increments by two 

next we reverse the second half of the list

reordering the linked list
- we use temporary pointers to hold th next nodes for each half
- break the link between the nodes in the first and second lists
- link the first nodes of each half
- go to the next node

#### Complexity
- Time: $O(n)$
- Space: $O(1)$
# Remove Node From End of Linked List
https://neetcode.io/problems/remove-node-from-end-of-linked-list/question?list=blind75

## Topics:
Linked List, Two Pointers

## Recommended Time & Space Complexity

You should aim for a solution with O(N) time and O(1) space, where N is the length of the given list. 


## Solutions
### Solution 1: using two pointers [optimal]
Input: linked list = [1, 2, 3, 4, 5] n = 2
output: [1, 2, 3, 5]

- we create a dummy node at that points to the head
- we find the nth node from that dummy node
- we iterate the dummy node and the current node until we find the last element
- we asign the address in the nth node, to the dummy node, ie left.next = left.next.next

#### Complexity
- Time: $O(n)$
- Space: $O(1)$
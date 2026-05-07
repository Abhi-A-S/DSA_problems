# Merge Two Sorted Linked Lists
https://neetcode.io/problems/merge-two-sorted-linked-lists/question?list=blind75

## Topics
Array, Hash Table, Divide and Conquer, Sorting, Heap (Priority Queue), Bucket Sort, Counting, Quickslect

## Recommended Time & Space Complexity

You should aim for a solution with O(n + m) time and O(1) space, where n is the length of list1 and m is the length of list2. 

## Solutions
### Solution 1: using merge sort logic [optimal]
ex:- l1 = [1, 2, 4] l2 = [1, 3, 4]
output:- [1, 1, 2, 3, 4, 5]

- create a dummy node
- we start with the heads of the two lists
- find the node that has the smaller value, ie of l1.value and l2.value
- add that to the next of dummy
- go to the next node of the list with smaller value
- continue until both lists are empty


#### Complexity
- Time: $O(n + m)$
- Space: $O(1)$
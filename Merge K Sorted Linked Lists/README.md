# Merge K Sorted Linked Lists
https://neetcode.io/problems/merge-k-sorted-linked-lists/question?list=blind75

## Topics
Array, Hash Table, Divide and Conquer, Sorting, Heap (Priority Queue), Bucket Sort, Counting, Quickslect

## Recommended Time & Space Complexity

You should aim for a solution as good or better than O(n * k) time and O(1) space, where k is the total number of lists and n is the total number of nodes across all lists. 

## Solutions
### Solution 1: using merge sort logic [optimal]
ex:- nums = [[5], [7], [3], [8]]
output:- [3, 5, 7, 8]

- take the heads of the k linked lists 
- iteratively find the one with the smallest value
- take that node, and put it in a resultant list
- update that head to point to the next node
- continue until all nodes are empty


#### Complexity
- Time: $O(n \log k)$
- Space: $O(1)$
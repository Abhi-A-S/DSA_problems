# Top K Frequent Elements
https://neetcode.io/problems/top-k-elements-in-list/question?list=blind75

## Topics
Array, Hash Table, Divide and Conquer, Sorting, Heap (Priority Queue), Bucket Sort, Counting, Quickslect

## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(n) space, where n is the size of the input array.

## Solutions
### Solution 1: finding counts and sorting them
ex:- nums = [1,1,1,2,2,3] k=2
output:- [1,2]

idea:- finding counts of each element and then sort it to get k highest values
- find counts of each elements
- sort the elements based on counts
- get the k last elements

#### Complexity
- Time: $O(n\log n)$
- Space: $O(n)$

### Solution 2: using bucket sort [optimal]
ex:- nums = [1,1,1,2,2,3] k=2
output:- [1,2]

idea:- create a bucket sort for the counts of frequency of number
- find counts of numbers
- create a bucket sort, with count as index and a list of numbers as the value
- iterate in descending order
- add k numbers from the bucket to the list containing the result


#### Complexity
- Time: $O(n)$
- Space: $O(n)$
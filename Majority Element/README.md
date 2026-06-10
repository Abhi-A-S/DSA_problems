# Majority Element
https://neetcode.io/problems/remove-element/question?list=neetcode250

## Topics:
Array, Hash Table, Divide and Conquer, Sorting, Counting


## Solutions
### Solution 1: using hash maps 
Input: nums = [5,5,1,1,1,5,5]

Output: 5

idea:- using hash to count
- create a hash map for counting the elements
- iterate over the array and count the elements occurance into the hash map
- return the element with more than n/2 occurance

#### Complexity
- Time: $O(n)$
- Space: $O(n)$

### Solution 2: counting results [optimal]
Input: nums = [5,5,1,1,1,5,5]

Output: 5

idea:- track the max occuring number
- take the first occuring element as the result
- take a count variable and increment it everytime it occurs again
- if another number comes, decrement the counter
- if count becomes zero, take the next occuring number as the result

#### Complexity
- Time: $O(n)$
- Space: $O(1)$
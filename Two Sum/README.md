# Two Sum
https://neetcode.io/problems/two-integer-sum/question?list=blind75


## Topics:
Arrays, Hash Tables 


## Recommended Time & Space Complexity
You should aim for a solution with O(n) time and O(n) space, where n is the size of the input array. 

## Solutions
### Solution 1: Comparing the elements
ex:- [2, 1, 5, 3] targer = 4

idea:- check sums of two elements over the array
- iterate over the array
- take i th element and sum it with all other elements 
- check it the sum is equal to the targe
- if not, go to the i+1 th element
- continue until the solution is found

#### Complexity
- Time: $O(n^2)$
- Space: $O(1)$

### Solution 2: using a hashmap [optimal]
ex:- [2, 1, 5, 3] targer = 4

idea:- check sums of two elements over the array
- iterate over the array
- take i th element and sum it with all other elements 
- check it the sum is equal to the targe
- if not, go to the i+1 th element
- continue until the solution is found

#### Complexity
- Time: $O(n)$
- Space: $O(n)$

# First Missing Positive
https://neetcode.io/problems/first-missing-positive/question?list=neetcode250


## Topics:
Arrays, Hash Tables 


## Recommended Time & Space Complexity
You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

## Solutions
### Solution 1: Sorting the array
ex:- [1,4, -1, -1]
output => [-1, 1, 1, 4] => 2 is the minimum missing

idea:- if there was a missing number, then it will be caught when iterating through the sorted array
- assume min term is 1
- check if 1 exists in array, then increment min term to 2
- else go to next element
- do this for all elements

#### Complexity
- Time: $O(n\log n)$
- Space: $O(1)$

### Solution 2: using the array as a hash set [optimal]
idea 1: for any array of size n, the worst case scenario answer is [1 to n], ie n+1 is the minimum missing positive number
idea 2:- using the array as a hash, so that we can check if a number exists in the array.

we use 3 interations to check if a number is in the array or not

#### iteration 1
- iterate over the array, set all negative numbers to 0

#### iteration 2
- iterate over the array to get the element's absolute value, ie, val = $|element| - 1$
- use the element as an index value unless its not out of bounds, get nums[val]
- if nums[val] is positive make it nagative, if nums[val] > 0 then nums[val] = -1 * nums[val]. This will show that the value exists in the array.
- if nums[val] is 0, then we give it a defualt out of bounds value, ie nums[val] = $-(len(nums) + 1)$

**note**: here we are using the sign to signify if a number exists or not, if the number exists in the array then we that index value as negative, if the value doesnt exist it is kept as positive

#### iteration 3
- iterate over the array
- check if the number is positive
- return the index
- if all are negative, it is worst case, ie return n+1


#### Complexity
- Time: $O(n)$
- Space: $O(1)$


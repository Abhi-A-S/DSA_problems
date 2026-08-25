# Jump Game
https://neetcode.io/problems/jump-game/question?list=blind75

## Topics
Array, Dynamic Programming, Greedy

## Recommended Time & Space Complexity
You should aim for a solution with O(n) time and O(1) space, where n is the size of input array. 

## Solutions
### Solution 1: using DP [optimal]
Example 1:

Input: nums = [1,2,0,1,0]

Output: true

Explanation: First jump from index 0 to 1, then from index 1 to 3, and lastly from index 3 to 4.

- start from the end of the array, this way we find goal posts one position at a time
- iterate over the array by taking a pointer for the position
- go back to the the before it
- keep shifting back and creating goal posts until you reach the first position
- if you never reach the first position then it is taken as a dead end and not solvable


#### Complexity
- Time: $O(n)$
- Space: $O(1)$
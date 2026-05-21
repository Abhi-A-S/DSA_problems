# Car Fleet
https://neetcode.io/problems/car-fleet/question?list=neetcode150

## Topics:
Array, Stack, Sorting, Monotonic Stack

## Recommended Time & Space Complexity

You should aim for a solution with O(nlogn) time and O(n) space, where n is the size of the input array. 

## Solutions
### Solution 1: using stack to hold the tempratures in monotonically decreasing order [optimal]
Input: target = 10, position = [4,1,0,7], speed = [2,2,1,1]

Output: 3

Explanation: The cars starting at 4 and 7 become a fleet at position 10. The cars starting at 1 and 0 never catch up to the car ahead of them. Thus, there are 3 car fleets that will arrive at the destination.

- sort the position array in descending order
- stating with the car at the furtherest
- find the amount of time that is required by it reach the target
- now got to the car before it, check if it reaches the target at or before that time
- if so then it is part of the fleet
- now pop that car and go to the next car
- if it doesn't catch up, push it into the stack as a new fleet
- continue checking the next cars


#### Complexity
- Time: $O(n \log n)$
- Space: $O(n)$
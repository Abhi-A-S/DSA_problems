# Coin Change
https://neetcode.io/problems/coin-change/question?list=blind75

## Topics
Array, Dynamic Programming, Breadth-First Search

## Recommended Time & Space Complexity
You should aim for a solution with O(n * t) time and O(t) space, where n is the number of coins and t is the given amount. 

## Solutions
### Solution 1: using DP [optimal]
Input: coins = [1,5,10], amount = 12

Output: 3

Explanation: 12 = 10 + 1 + 1. Note that we do not have to use every kind coin available.

- we initialize a DP array for memoization, which goes from the minimum coin value to the required target
- using bottom up memoization
- we will start from the minimum value
- find then ways in which it can be made using the coins we have
- and once it is done, we will go to the amount after that
- check if the amount is equal to the next higher coin, if not use the same previous coin and reduce it
- the reduced way is our sub problem
- hence the final dp formula for a value i will become dp[i] = min(dp[i], 1 + dp[a - coin]) 

eg: taking [1, 5, 10]
- start from 1
- 1 = 1, => 1 coin
- 2 = 1 + 1 => 2 coins
- 3 = 2 + 1 => 3 coins
- 4 = 3 + 1 => 4 coins
- 5 = 5 => 1 coin, as 5 is equal to the next coin
- 6 = 5 + 1 => 2 coins
- 7 = 6 + 1 => 3 coins
- 8 = 7 + 1 => 4 coins
- 9 = 8 + 1 => 5 coins
- 10 = 10 => 1 coin
- 11 = 10 + 1 => 2 coins
- 12 = 11 + 1 => 3 coins

#### Complexity
- Time: $O(n t)$
- Space: $O(t)$
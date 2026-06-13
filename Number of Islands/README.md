# Number of Islands
https://neetcode.io/problems/count-number-of-islands/question?list=blind75

## Topics
Array, Depth-First Search, Breadth-First Search, Union Find, Matrix

## Recommended Time & Space Complexity
You should aim for a solution with O(m * n) time and O(m * n) space, where m is the number of rows and n is the number of columns in the grid. 

## Solutions
### Solution 1: using bfs to find neighbours [optimal]
Input: grid = [
    ["0","1","1","1","0"],
    ["0","1","0","1","0"],
    ["1","1","0","0","0"],
    ["0","0","0","0","0"]
  ]
Output: 1

- create a variable to count the number of islands
- create a list to keep track of all the positions that have been visited
- start from the top left element in the matrix, add it to the visited list
- check if its 1 or not
- if it is 1, then check its neighbours for 1s and add them to the visited list
- repeat this process until all the neighbors are 0
- this means that this is an island
- increment the island count
- go to the next position and repeat the above process
- do this until the entire matrix has been traversed 

#### Complexity
- Time: $O(m * n)$
- Space: $O(m * n)$
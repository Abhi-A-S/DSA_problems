# Course Schedule
https://neetcode.io/problems/course-schedule/question?list=blind75

## Topics
Depth-First Search, Breadth-First Search, Graph Theory, Topological Sort

## Recommended Time & Space Complexity
You should aim for a solution with O(V + E) time and O(V + E) space, where V is the number of courses (nodes) and E is the number of prerequisites (edges). 

## Solutions
### Solution 1: using topological sorting [optimal]
Input: numCourses = 2, prerequisites = [[0,1]]

Output: true

- using the pre-requisite pairs, create the graph for the dependencies
- to do this we can use DFS algorithm
- implement a pre-requisite map for the courses and what they depend on
- using this we can create the topological ordering of the graph
- now once the topology is created
- start popping the nodes that do not have any pre-requisites
- once the node is popped, mark it as visited
- if there is a loop, the same one will be visited
- check if the node is already visited
- if yes, it is not possible to take it
- otherwise it is possible to order it

#### Complexity
- Time: $O(V + E)$
- Space: $O(V + E)$
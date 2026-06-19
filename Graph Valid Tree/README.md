# Graph Valid Tree
https://neetcode.io/problems/valid-tree/question?list=blind75

## Topics
Depth-First Search, Breadth-First Search, Union Find, Graph

## Recommended Time & Space Complexity
You should aim for a solution as good or better than O(V + E) time and O(V + E) space, where V is the number vertices and E is the number of edges in the graph. 

## Solutions
### Solution 1: using dfs [optimal]
Input:
n = 5
edges = [[0, 1], [0, 2], [0, 3], [1, 4]]

Output:
true

- start at any node in the graph, say 0
- using dfs we will find the neighbour node
- for each node we visit we will count them, if the count is equal to the number of nodes. it is valid
- while traversing the graph, if we revisit a node. it means it has a cycle and hence it is not a tree
- in order to not go back to the same node we came from, we will also pass the previous node as an argument

#### Complexity
- Time: $O(V + E)$
- Space: $O(V + E)$
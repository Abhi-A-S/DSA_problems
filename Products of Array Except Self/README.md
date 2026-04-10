# Products of Array Except Self
https://neetcode.io/problems/products-of-array-discluding-self/question?list=blind75

## Topics:
Array, Prefix Sum

## Recommended Time & Space Complexity

You should aim for a solution as good or better than O(n) time and O(n) space, where n is the size of the input array. 


## Solutions
### Solution 1 : prefix and postfix multiples [optimal]
Input: strs = [1, 2, 3, 4]

idea:- using 2 for loops
- outer loop to go over the numbers in an array
- inner loop to find the product of elements except that position

#### Complexity
- Time: $O(n^2)$
- Space: $O(1)$

### Solution 2: prefix and postfix multiples [optimal]
Input: strs = [1, 2, 3, 4]

idea:- using prefix and postfix product array []

#### finding prefix
- prefix array has previous multiples
- start prefix with prefix[0] = a[0]
- to find nth term, multipy prefix with n-1 th term, ie prefix[1] = prefix[n-1] * a[n-1], continue will n-1 the term
- [1, 1, 2, 6] , ie prefix with n terms = [a[0], a[0] * prefix[0], a[1] * prefix[1], ..., a[n-2]*prefix[n-2]]

#### finding post fix
- postfix array has next multiples
- start with postfix[n-1] = prefix[n-1], ir postfix[4] = prefix[4]
- to find nth term, muliply postfix with n+1 th term, ie postfix[3] = postfix[4] * prefix[4]
- [24, 12, 8, 6] , ie postfix with n terms = [prefix[0] * postfix[1], ..., prefix[n-2] * postfix[n-1], postfix[n-1]]

#### Complexity
- Time: $O(n)$
- Space: $O(n)$
# Contains Duplicate
https://neetcode.io/problems/duplicate-integer/question?list=blind75

## Topics:
Arrays, Hash Tables, Sorting

## Company Tags
Google 16
Amazon 5
Meta 3
Microsoft 2
Bloomberg 2
Apple 2
Capgemini 2
TCS 6
Yahoo 5
Adobe 4
Netflix 4
Accenture 4
Oracle 3
Zoho 3
Uber 3
IBM 2
Airbnb 2


## Recommended Time & Space Complexity

You should aim for a solution with O(n) time and O(n) space, where n is the size of the input array.

## Solutions
### Solution 1: Checking each element
ex:- [1,2,3,1]

- take 1, check if the rest of the number have 1
- if there is 1, then duplicate exists
- else go to next number 2
- check if rest of the numbers have 2... and so on

#### Complexity
- Time: $O(n^2)$
- Space: $O(1)$

### Solution 2: Sorting the array
ex:- [1,2,3,1] => [1,1,2,3]

idea:- sorted array will have same elements be adjacent
- sort the array
- iterate over the sorted array check if any two adjacent numbers are equal

#### Complexity
- Time: $O(n\log n)$
- Space: $O(1)$

### Solution 3: Using hash table [optimal]
ex:- [1,2,3,1]

idea:- all items in a hash set are unique
- iterate over the array and add elements to hash set
- if the element is repeated then, then it will be present in the hash set already

#### Complexity
- Time: $O(n)$
- Space: $O(1)$
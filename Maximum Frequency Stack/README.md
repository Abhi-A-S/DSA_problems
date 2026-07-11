# Maximum Frequency Stack
https://neetcode.io/problems/maximum-frequency-stack/question?list=neetcode250

## Topics:
Hash Table, Stack, Design, Ordered Set

## Solutions
### Solution 1: using hashmap [optimal]
Input: ["FreqStack", "push", "push", "push", "push", "push", "push", "pop", "pop", "pop", "pop"]
[[], [5], [7], [5], [7], [4], [5], [], [], [], []]

Output: [null, null, null, null, null, null, null, 5, 7, 5, 4]

Explanation:
FreqStack freqStack = new FreqStack();

freqStack.push(5); // The stack is [5]

freqStack.push(7); // The stack is [5,7]

freqStack.push(5); // The stack is [5,7,5]

freqStack.push(7); // The stack is [5,7,5,7]

freqStack.push(4); // The stack is [5,7,5,7,4]

freqStack.push(5); // The stack is [5,7,5,7,4,5]

freqStack.pop(); // return 5, as 5 is the most frequent. The stack becomes [5,7,5,7,4].

freqStack.pop(); // return 7, as 5 and 7 is the most frequent, but 7 is closest to the top. The stack becomes [5,7,5,4].

freqStack.pop(); // return 5, as 5 is the most frequent. The stack becomes [5,7,4].

freqStack.pop(); // return 4, as 4, 5 and 7 is the most frequent, but 4 is closest to the top. The stack becomes [5,7].


- using hash map to store the counts of the values as we enter them
- take a variable to hold the maximum of the hashmap
- if there are multiple elements with same frequency, we delete the element that appears the last in the stack, ie most recently added elements

implementation
- create buckets for storing elements at each occurance
- imaging [x, y, z, x, y, x]
- we can bucket them as
- 1: [x, y, z], 2: [x, y], 3: [x]
- this way we store the number of occurances and the last added element

adding element
- when adding an element n, we go to the counts hashmap
- increment the value in the hashman and add it to that bucket

deleting element
- we find the hashmap's hightest value
- remove the last element from that hashmap's value list for that key 


#### Complexity
- Time: $O(n)$
- Space: $O(n)$
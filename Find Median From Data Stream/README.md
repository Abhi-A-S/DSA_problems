# Find Median From Data Stream
https://neetcode.io/problems/find-median-in-a-data-stream/question?list=blind75

## Topics
Two Pointers, Design, Sorting, Heap (Priority Queue), Data Stream

## Recommended Time & Space Complexity
You should aim for a solution with O(logn) time for addNum(), O(1) time for findMedian(), and O(n) space, where n is the current number of elements. 

## Solutions
### Solution 1: usign heap / priority queue [optimal]
Input:
["MedianFinder", "addNum", "1", "findMedian", "addNum", "3" "findMedian", "addNum", "2", "findMedian"]

Output:
[null, null, 1.0, null, 2.0, null, 2.0]

Explanation:
MedianFinder medianFinder = new MedianFinder();
medianFinder.addNum(1);    // arr = [1]
medianFinder.findMedian(); // return 1.0
medianFinder.addNum(3);    // arr = [1, 3]
medianFinder.findMedian(); // return 2.0
medianFinder.addNum(2);    // arr[1, 2, 3]
medianFinder.findMedian(); // return 2.0

main idea: using priority queue to sort the elements and find the mid value

we use two heaps: Small Heap(implements MaxHeap), Large Heap(implements MinHeap)
- every value in small heap is less than or equal to the large heap

finding median
- if one of the heap has odd number of elements
- if its small heap, we return the max value
- if its large heap, we return the min value
- if they are of same size
- return the average of the max value in small heap and min value of large heap

inserting elements
main idea: the lengths must be mostly equal for both the heaps
- check the number of elements in the heaps
- if element < min(large heap) and length(small heap) > length(large heap)
- add the max of small heap to large heap, and remove it from the small heap
- and add the element into small heap
- if the element is larger than the max in small heap
- add it to the large heap

shifing elements from heap to another
- check if the the heaps are of similiar size (+- 1 length) and max(small heap) < min(large heap)
- if small heap has more elements
- take max(small heap) and add it to the large heap while deleting it from the small heap
- else if large heap has more elements
- take the min(large heap) and add it to the small heap while deleting it from the large heap


#### Complexity
- Time: $O(n \log n)$
- Space: $O(n)$
# searching
Searching is the process of finding some particular element in the list. If the element is present in the list, then the process is called successful and the process returns the location of that element, otherwise the search is called unsuccessful.

There are two popular search methods that are widely used in order to search some item into the list. However, choice of the algorithm depends upon the arrangement of the list.

  # Linear Search

Linear search is the simplest search algorithm and often called sequential search. In this type of searching, we simply traverse the list completely and match each element of the list with the item whose location is to be found. If the match found then location of the item is returned otherwise the algorithm return NULL.
Linear search is mostly used to search an unordered list in which the items are not sorted. The algorithm of linear search is given as follows.


Complexity	Best Case	Average Case	Worst Case,
Time	       O(1)	    O(n)	             O(n)
  
  # Binary Search

Binary search is the search technique which works efficiently on the sorted lists. Hence, in order to search an element into some list by using binary search technique, we must ensure that the list is sorted.
Binary search follows divide and conquer approach in which, the list is divided into two halves and the item is compared with the middle element of the list. If the match is found then, the location of middle element is returned otherwise, we search into either of the halves depending upon the result produced through the match.
Binary search algorithm is given below.

Worst case	O(log n)

Best case	O(1)

Average Case	O(log n)

Worst case space complexity	O(1)

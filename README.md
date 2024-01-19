
1. Bucket Sort;
      Performance Analysis:
          Time Complexity: O(n + k), where n is the number of elements and k is the range of the input.
          Space Complexity: O(n + k), additional space required for buckets.
          Best Case: O(n + k) when elements are evenly distributed into buckets.
          Worst Case: O(n^2) when elements are poorly distributed.
   
2. Counting Sort
       Performance Analysis:
            Time Complexity: O(n + k), where n is the number of elements and k is the range of the input.
            Space Complexity: O(k), where k is the range of the input.
            Best Case: O(n + k) for uniformly distributed input.
            Worst Case: O(n + k) for non-uniformly distributed input.
   
3. Pigeonhole Sort
        Performance Analysis:      
            Time Complexity: O(n + N), where n is the number of elements and N is the range of possible key values.
            Space Complexity: O(N), additional space required for pigeonholes.
            Best Case: O(n + N) for uniformly distributed input.
            Worst Case: O(n^2) for non-uniformly distributed input.
   
4. Postman Sorting
      Performance Analysis:
          Time Complexity: O(d * (n + k)), where n is the number of elements, k is the range of the input, and d is the number of digits in the maximum number.
          Space Complexity: O(n + k), additional space required for buckets.
          Best Case: O(d * (n + k)) for uniformly distributed input.
          Worst Case: O(d * (n + k)) for non-uniformly distributed input.

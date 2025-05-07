# INDV-ASS

# Student Information
   -Name:Webi Getachew
   -Id:RMNS-3107/23
   -Course-DSA

### Find Smallest Number Algorithm
 Steps:
1. Initial Check:
   - Verify array is not empty (throw exception if empty)
   - Initialize smallest with first element
2. Iteration:
   - Compare each subsequent element with smallest
   - Update smallest when a smaller number is found
3. Result:
   - Return the final smallest value
Time Complexity
- Best Case: O(n)
- Average Case: O(n)
- Worst Case: O(n)
Space Complexity: O(1) - uses constant extra space
### How to Run
1. Compile the program:
g++ find_smallest.cpp -o find_smallest
2. Execute the program:
./find_smallest
3. Expected Output:
The smallest number in the array is: 2
## How the Code Works
1. findSmallestNumber() Function:
   - Takes integer array and its size as input
   - Throws exception for empty arrays
   - Implements the search algorithm
   - Returns smallest number found
2. Main Function:
   - Initializes the array
   - Calculates array size
   - Calls findSmallestNumber() within try-catch block
   - Displays result or error message
### Find Second Largest Algorithm
Steps:
1. Initialization:
   - Set largest and secondLargest to minimum integer value
   - Check array has at least 2 elements
2. Iteration:
   - For each number in array:
     - If number > largest, update both secondLargest and largest
     - Else if number > secondLargest and ≠ largest, update secondLargest
3. Validation:
   - Verify a distinct second largest was found
   - Return result or error code
 Time Complexity
- All Cases: O(n) - examines each element exactly once
- Space Complexity: O(1) - uses constant extra space
### How to Run
1. Compile the program:
g++ second_largest.cpp -o second_largest
2. Execute the program:
./second_largest
3. Expected Output (for default array):
The second largest number is: 34
## How the Code Works
1. findSecondLargest() Function:
   - Takes integer array and its size
   - Initializes trackers with minimum integer value
   - Implements single-pass comparison logic
   - Handles error cases:
     - Array too small
     - No distinct second largest
   - Returns second largest number or -1 (error)
2. Main Function:
   - Initializes test array
   - Calculates array size
   - Calls findSecondLargest()
   - Displays result if valid
   ### Find Third Largest Algorithm Steps:
1. Initialization:
   - Set largest, secondLargest, and thirdLargest to minimum integer value
   - Verify array has at least 3 elements
2. Iteration:
   - For each number in array:
     - If number > largest: cascade updates through all three trackers
     - Else if number > secondLargest and distinct: update second and third
     - Else if number > thirdLargest and distinct: update third
3. Validation:
   - Confirm a distinct third largest was found
   - Return result or error code
Time Complexity
- Best/Average/Worst Case: O(n) - examines each element exactly once
- Space Complexity: O(1) - uses constant extra space
### How to Run
1. Compile the program:
g++ third_largest.cpp -o third_largest
2. Execute the program:
./third_largest
3. Expected Output (for default array):
The third largest number is: 15
## How the Code Works
1. findThirdLargest() Function:
   - Takes integer array and its size
   - Initializes three trackers with minimum integer value
   - Implements cascading comparison logic
   - Handles error cases:
     - Array too small
     - Insufficient distinct values
   - Returns third largest number or -1 (error)
2. Main Function:
   - Initializes test array [34, 15, 88, 2, 7]
   - Calculates array size (5)
   - Calls findThirdLargest()
   - Displays result if valid
# Algorithm Explanation To Bubble Sort
# Step
1. Start with the first element (index 0)
2. Compare it with the next element (index 1)
3. If they are out of order, swap them
4. Move to the next pair (index 1 and 2)
5. Repeat until the end of the array is reached
6. The largest element will "bubble up" to the end
7. Repeat the process for the remaining elements (excluding the already sorted ones)

Time Complexity
- Worst Case: O(n²) - When array is reverse sorted
- Average Case: O(n²)
- Best Case: O(n) - When array is already sorted (with optimization)
 Space Complexity
O(1) - Sorts in place without additional storage
### How to Compile and Run
1. Save the code to bubble_sort.cpp
2. Compile with: g++ bubble_sort.cpp -o bubble_sort
3. Run with: ./bubble_sort
4.  Sample Output
Original Array: 64 34 25 12 22 11 90 5 3 1 
Sorted Array (Bubble Sort): 1 3 5 11 12 22 25 34 64 90
## How the Code Works
### Pointer Implementation Details
1. bubbleSort(int* arr, int size):
   - Takes array pointer and size as input
   - Uses pointer arithmetic (*(arr + j)) to access elements
   - Nested loops:
     - Outer loop controls number of passes
     - Inner loop performs comparisons and swaps
2. Operations:
   - Comparison: if (*(arr + j) > *(arr + j + 1))
   - Swap: swap(*(arr + j), *(arr + j + 1))
3. printArray(int* arr, int size):
   - Utility function to display array contents
   - Also uses pointer arithmetic to access elements
   ### Quick Sort Algorithm
Quick sort is a divide-and-conquer algorithm that works by:
1. Selecting a 'pivot' element from the array
2. Partitioning the array into two subarrays:
   - Elements less than the pivot
   - Elements greater than the pivot
3. Recursively applying the same process to the subarrays
 Steps
1. Partitioning:
   - Choose last element as pivot
   - Initialize pointer i to track position of smaller elements
   - Traverse array with pointer j
   - Swap elements when smaller than pivot
   - Finally place pivot in correct position
2. Recursive Sorting:
   - Sort left subarray (elements < pivot)
   - Sort right subarray (elements > pivot)
# Performance
 Case  Time Complexity  Space Complexity 
 Best     O(n log n)   O(log n) 
 Average  O(n log n)   O(log n) 
 Worst    O(n²)        O(n) 
### How to Run
1. Compile the program:
g++ quick_sort.cpp -o quick_sort
2. Execute the program:
./quick_sort
3. Expected Output:
Original Array: 64 34 25 12 22 11 90 5 3 1 
Sorted Array (Quick Sort): 1 3 5 11 12 22 25 34 64 90
## How the Code Works
1. partition() function:
   - Selects pivot (last element)
   - Rearranges array around pivot
   - Returns final pivot position
2. quickSort() function:
   - Recursively sorts subarrays
   - Base case: when subarray has 0 or 1 elements
3. printArray() function:
   - Utility function to display array contents 

# Iterative-and-Recursive-Approach-in-Algorism 
# Binary Search Implementation (Iterative & Recursive)
1. Iterative approach (iBs)
2. Recursive approach (rBs)
### How to Run
1. Compile the program:
g++ binary_search.cpp -o binary_search
2. Execute the program:
./binary_search
3. Expected Output:
Target found at index (iterative): 3
Target found at index (recursive): 3

###  Algorithm Iterative and Recursive
# How It Works
#### Iterative Approach (iBs):
1. Initialize low and high pointers
2. While low <= high:
   - Calculate mid-point (protected against overflow)
   - Compare target with middle element
   - Adjust search range based on comparison
3. Return index if found, -1 otherwise

#### Recursive Approach (rBs):
1. Base case: If low > high, return -1
2. Calculate mid-point
3. If middle element matches target, return index
4. Recursively search left or right half

## Code Walkthrough
Functions
1. iBs() (Iterative Binary Search):
   - Uses while loop to narrow search range
   - Returns immediately when target is found
   - Handles search termination gracefully

2. rBs() (Recursive Binary Search):
   - Uses function calls to divide problem
   - Each recursive call works on a subarray
   - Stack unwinds when target is found or range exhausted

Time  Complexity : Iterative O(log n)  
                   Recursive  O(log n)     
Complexity  Space : IterativeO(1)  Large arrays, memory constraints 
                    Recursive O(log n)  Conceptual clarity, smaller arrays
### Exponential Search Algorithm
1. Range Finding Phase:
   - Start with a small range (bound = 1)
   - Repeatedly double the bound until:
     - The element at bound exceeds the target, or
     - We reach/exceed the array size
2. Binary Search Phase:
   - Perform binary search in the identified range (bound/2 to min(bound, size-1))
Time Complexity
- Best Case: O(1) - when target is first element
- Average Case: O(log n)
- Worst Case: O(log n)
Space Complexity: O(1)
### How to Run
1. Compile the program:
g++ exponential_search.cpp -o exponential_search
2. Execute the program:
./exponential_search
3. Sample Output:
Target found at index: 3
## How the Code Works
1. binarySearch():
   - Standard binary search implementation
   - Uses while loop for iteration
   - Calculates mid-point without overflow risk
2. exponentialSearch():
   - First checks if target is at first position
   - Expands search range exponentially
   - Calls binary search on identified range

### Jump Search Algorithm

# Steps:
1. Initialization:
   - Calculate optimal jump size as √(array length)
   - Set previous boundary to 0

2. Jump Phase:
   - Jump ahead in blocks of √n size
   - Stop when:
     - Element at jump position exceeds target, or
     - End of array is reached

3. Linear Search Phase:
   - Perform linear search in the identified block
   - Return index if found, -1 otherwise

Time Complexity
- Best Case: O(1) - target is first element
- Average Case: O(√n)
- Worst Case: O(√n)

Space Complexity: O(1) - uses constant extra space

### How to Run
1. Compile the program:
g++ jump_search.cpp -o jump_search
2. Execute the program:
./jump_search
3. Expected Output (for default values):
Target found at index: 3
## How the Code Works

1. jumpSearch() Function:
   - Takes sorted array, size, and target as input
   - Implements the jump search algorithm
   - Returns index of target or -1 if not found

2. Main Function:
   - Initializes sorted array and target value
   - Calculates array size
   - Calls jumpSearch() and displays results

## Algorithm Hash Table Structure
- Array: Stores key-value pairs (simplified to just keys)
- Size: Fixed at creation time
- Empty Slots: Marked with -1

###  Operations

## 1. Insertion
1. Compute hash index: hashFunction(key) = key % size
2. If slot is empty (-1), insert key
3. If slot is occupied, probe linearly (next index) until finding empty slot
4. Wrap around to start of array if reaching end

## 2. Search
1. Compute hash index: key % size
2. Check if key matches at computed index
3. If not, probe linearly until:
   - Key is found
   - Empty slot is found (-1)
   - Full loop around table is completed

Time Complexity
 Operation  Average Case  Worst Case 

 Insert     O(1)          O(n)       
 Search     O(1)          O(n)       

Space Complexity: O(n) - where n is table size
### How to Run
1. Compile the program:
g++ hash_table.cpp -o hash_table
2. Execute the program:
./hash_table
3. Expected Output:
Target found at index: 7
## How the Code Works
### Class Structure
1. Private Members:
   - table: Pointer to dynamically allocated array
   - size: Size of the hash table
   - hashFunction(): Computes index using modulo operation

2. Public Methods:
   - Constructor: Initializes table with -1 (empty markers)
   - Destructor: Frees allocated memory
   - insert(): Adds key to table with collision resolution
   - search(): Finds key in table





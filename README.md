````markdown
# 📊 Sorting Algorithms

This project implements several classic sorting algorithms in C language, as part of the Holberton School curriculum.

## 📋 Description

This project explores the implementation and time complexity analysis of different sorting algorithms:
- **Bubble Sort**
- **Insertion Sort**
- **Selection Sort**
- **Quick Sort**

Each algorithm is accompanied by an analysis of its time complexity in best, average, and worst cases.

## 🗂️ Project Structure

```
holbertonschool-sorting_algorithms/
│
├── sort.h                      # Main header file
├── print_array.c              # Function to display arrays
├── print_list.c               # Function to display lists
│
├── 0-bubble_sort.c            # Bubble sort implementation
├── 0-O                        # Bubble sort time complexity
├── 0-main.c                   # Bubble sort test
│
├── 1-insertion_sort_list.c    # Insertion sort implementation
├── 1-O                        # Insertion sort time complexity
├── 1-main.c                   # Insertion sort test
│
├── 2-selection_sort.c         # Selection sort implementation
├── 2-O                        # Selection sort time complexity
├── 2-main.c                   # Selection sort test
│
├── 3-quick_sort.c             # Quick sort implementation
├── 3-O                        # Quick sort time complexity
├── 3-main.c                   # Quick sort test
│
└── README.md                  # This file
```

## 🛠️ Compilation and Execution

### Prerequisites
- GCC compiler
- Linux/Unix system

### Compilation
```bash
# Bubble sort
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble

# Insertion sort
gcc -Wall -Wextra -Werror -pedantic 1-insertion_sort_list.c 1-main.c print_list.c -o insertion

# Selection sort
gcc -Wall -Wextra -Werror -pedantic 2-selection_sort.c 2-main.c print_array.c -o select

# Quick sort
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-quick_sort.c 3-main.c print_array.c -o quick
```

### Execution
```bash
./bubble      # Run bubble sort
./insertion   # Run insertion sort
./select      # Run selection sort
./quick       # Run quick sort
```

## 📊 Implemented Algorithms

### 1. Bubble Sort
**Files:** `0-bubble_sort.c`, `0-O`

Bubble sort compares adjacent elements and swaps them if they are in the wrong order. This process is repeated until the array is sorted.

**Time Complexity:**
- Best case: O(n)
- Average case: O(n²)
- Worst case: O(n²)

### 2. Insertion Sort
**Files:** `1-insertion_sort_list.c`, `1-O`

Insertion sort builds the final sorted array one element at a time. It is efficient for small data sets. In this project, it is implemented on a doubly linked list.

**Time Complexity:**
- Best case: O(n)
- Average case: O(n²)
- Worst case: O(n²)

### 3. Selection Sort
**Files:** `2-selection_sort.c`, `2-O`

Selection sort divides the list into two parts: sorted and unsorted. It repeatedly selects the smallest element from the unsorted part.

**Time Complexity:**
- Best case: O(n²)
- Average case: O(n²)
- Worst case: O(n²)

### 4. Quick Sort
**Files:** `3-quick_sort.c`, `3-O`

Quick sort uses the "divide and conquer" strategy with the Lomuto partition scheme. The pivot is always the last element of the partition.

**Time Complexity:**
- Best case: O(n log n)
- Average case: O(n log n)
- Worst case: O(n²)

## 🔧 Data Structures

### Integer Array
Used for bubble sort, selection sort, and quick sort.

### Doubly Linked List
```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
Used for insertion sort. Nodes cannot be modified (constant `n` value), only links between nodes can be changed.

## 📝 Utility Functions

### `print_array`
Displays an integer array.
```c
void print_array(const int *array, size_t size);
```

### `print_list`
Displays a doubly linked list of integers.
```c
void print_list(const listint_t *list);
```

## 🎯 Learning Objectives

- Understand how classic sorting algorithms work
- Analyze time and space complexity
- Implement efficient algorithms in C
- Work with different data structures
- Respect coding standards and project constraints

## 📚 Big O Notation

The `*-O` files contain Big O notations for each algorithm:
- **O(1)**: Constant time
- **O(n)**: Linear time
- **O(n²)**: Quadratic time
- **O(log n)**: Logarithmic time
- **O(n log n)**: Quasi-linear time

### Complexity file format:
Each `*-O` file contains 3 lines:
1. Best case complexity
2. Average case complexity
3. Worst case complexity

## ✅ Tests

Each algorithm is accompanied by a test file (`*-main.c`) that:
- Initializes a test array with values: `{19, 48, 99, 71, 13, 52, 96, 73, 86, 7}`
- Displays the initial state of the array/list
- Executes the sorting algorithm
- Displays each sorting step (after each swap)
- Displays the final sorted result

### Expected output example:
```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

[sorting steps with display after each swap]

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

## 🔍 Technical Specifications

### Project constraints:
- Use GCC compiler with flags `-Wall -Wextra -Werror -pedantic`
- Respect Betty coding style
- Maximum 5 functions per file
- Variables declared at the beginning of blocks
- Mandatory display after each element swap

### Forbidden functions:
- No standard library functions except `printf`, `malloc`, `free`

## 🧪 Testing with Large Datasets

To test algorithms with large amounts of random data, you can use [Random.org](https://www.random.org/) to generate number sets.

## 👨‍💻 Author

Project developed as part of the Holberton School program.

## 📄 License

This project is for educational purposes only.
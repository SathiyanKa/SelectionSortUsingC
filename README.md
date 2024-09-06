# Selection Sort Algorithm in C

This repository contains an implementation of the Selection Sort algorithm in the C programming language.

## Table of Contents
- [Introduction](#introduction)
- [How Selection Sort Works](#how-selection-sort-works)
- [Program Structure](#program-structure)
- [How to Compile and Run](#how-to-compile-and-run)
- [Example Output](#example-output)
- [Complexity Analysis](#complexity-analysis)
- [Contributing](#contributing)
- [License](#license)

## Introduction
Selection Sort is a simple comparison-based sorting algorithm. It divides the input array into two parts: 
- The sorted part at the left end, and 
- The unsorted part at the right end.

The algorithm repeatedly selects the smallest (or largest, depending on sorting order) element from the unsorted part and swaps it with the first element of the unsorted part. This process continues until the array is sorted.

## How Selection Sort Works
1. Find the minimum element in the unsorted part of the array.
2. Swap it with the first element of the unsorted part.
3. Move the boundary between the sorted and unsorted part by one element to the right.
4. Repeat until the array is fully sorted.

## Program Structure
The implementation consists of the following files:
- `main.c`: The main file that contains the implementation of the selection sort algorithm and code to test it.
- `selectionSort.cbp`: Code::Blocks project file for the Selection Sort algorithm.
- `bin/Debug/selectionSort.exe`: Compiled executable file (for reference).

## How to Compile and Run

### Prerequisites
To compile and run the program, you need:
- A C compiler (e.g., GCC)
- A terminal or command-line interface

### Steps
1. Clone this repository:
    ```bash
    git clone https://github.com/yourusername/selectionSort.git
    cd selectionSort
    ```

2. Compile the program:
    ```bash
    gcc main.c -o selectionSort
    ```

3. Run the compiled program:
    ```bash
    ./selectionSort
    ```

## Example Output
Enter the number of elements: 5 
Enter elements: 64 25 12 22 11 
Sorted array: 11 12 22 25 64

## Complexity Analysis
- **Time Complexity**: 
  - Best case: O(n²)
  - Average case: O(n²)
  - Worst case: O(n²)
  
  Even though the algorithm performs well on small datasets, it is inefficient on large datasets due to its quadratic time complexity.

- **Space Complexity**: O(1) because selection sort is an in-place sorting algorithm, meaning it requires a constant amount of extra memory.

## Contributing
Contributions are welcome! Feel free to fork the repository and submit a pull request with improvements or bug fixes.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


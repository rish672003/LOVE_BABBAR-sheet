# Binary Search Tree (BST) Implementation

## Overview
This repository contains a C++ implementation of a Binary Search Tree (BST). The program allows users to insert elements into a BST and perform a **level order traversal** to display the elements in a structured format.

## Features
- **Node Creation:** Each node in the BST contains a data value, a left child pointer, and a right child pointer.
- **Dynamic Insertion:** Users can insert elements dynamically into the BST.
- **Level Order Traversal:** The program prints the BST level by level, making it easier to visualize the tree structure.

## Implementation Details
### 1. Class Definition: `Node`
- Contains:
  - `data`: The value stored in the node.
  - `left`: Pointer to the left child node.
  - `right`: Pointer to the right child node.
- Constructor initializes the node with the given data and sets child pointers to `NULL`.

### 2. Functions
#### `insertintoBST`
- Recursively inserts a new value into the BST at the appropriate position.

#### `levelOrdertraversal`
- Uses a queue to perform level order traversal of the BST.
- Outputs each level on a new line.

#### `takeinput`
- Accepts input from the user to build the BST dynamically.
- Stops reading input when `-1` is entered.

### 3. Main Function
- Initializes an empty BST.
- Prompts the user to input data to create the BST.
- Displays the level order traversal of the constructed BST.

## How to Use
1. Clone the repository:
   ```bash
   git clone <repository_link>
   ```
2. Compile the code using a C++ compiler, for example:
   ```bash
   g++ -o bst bst.cpp
   ```
3. Run the program:
   ```bash
   ./bst
   ```
4. Enter integers to create the BST, separating each value with a space. End the input with `-1`.
   Example input:
   ```
   Enter data to create BST: 10 5 20 3 7 15 -1
   ```
   Output:
   ```
   10
   5 20
   3 7 15
   ```

## Example Input/Output
### Input:
```
Enter data to create BST: 8 3 10 1 6 14 4 7 13 -1
```
### Output:
```
8
3 10
1 6 14
4 7 13
```

## Concepts Covered
- Binary Search Tree (BST) properties
- Recursive functions
- Queue-based level order traversal

## License
This project is open-source and available under the [MIT License](LICENSE).



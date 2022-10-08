1) Pointers
************
      * Introduction
      * Pointer Arithmetic
      * Arrays and Pointers
      * Characters and Pointers
      * Pointers and Functions
      * Double Pointer
      * MCQs




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************


2) Dynamic Allocation
**********************
      * Address Typecasting: --------------> implicit Typecasting
                             --------------> Explicit Typecasting
      * Pass By Value & Pass By Reference
      * Dynamic Memory Allocation:    
              > Variables: int *x = new int;    
              > Arrays: int *arr = new int[size]; ----------> //This dosn't mean array is "dynamic array".
      * Dynamic Memory Deallocation:  
              > Variables: delete x;
              > Arrays:    delete[] arr;
      * Note:- 
              * The memory declaration using heap memory is known as dynamic memory allocation.
              * While the one using stack is known as compile-time memory allocation.
              * Global variables are stored using Heap memory.
                   
      * Dynamic Allocation of 2D-Array
      * Jagged Array
      * Macros and Global Variable
      * Inline and Default Arguments
      * Constant Variables - const 
      * MCQs




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************


3) Recursion-1
***************
      * Recursion and PMI: * Base case
                           * Recursive call
                           * Important/small calculations
      * Types:  * Tail Recursion
                * Head Recursion
      * Fibonacci Numbers
      * Recursion and Arrays
      problems:
      ---------
          * Power
          * Print Numbers
          * Number of Digits
          * Sum of Array
          * Check Numbers
          * First index of Number
          * Last index of Number
          * All indices of Number
          * Assignments:    * Multiplication
                            * Count Zeros
                            * Geometric Sum
                            * Check Palindrome
                            * Sum of Digits




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************


4) Assignment: Recursion-1b
****************************
      * Replace pi (recursive)
      * Remove X
      * String to Integer
      * Pair Star
      * Tower of Hanoi




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************


5) Recursion-2
***************
      * Recursion and Strings
      * Merge Sort 
      * Quick Sort
      * String:  i)  Subsequence/ Subset ---> (2^N)
                 ii) Permutations ----------> (N!)
                 iii)Substrings   ----------> N*(N+1)/2  ✖✖
      problems:
      ---------
          * Replace Character recursively
          * Remove Duplicate recursively
          * Merge Sort code
          * Quick Sort code
          * Return Keypad Code
          * Print Keypad Combinations code
          * Assignments:    * Check AB
                            * Staircase
                            * Binary Search (recursive)
                            * Return Subset of an Array
                            * Print Subsets of Array
                            * Return Subsets sum to K
                            * Print Subsets sum to K  ✖✖
                            * Return all code - string
                            * Print All Codes - string
                            * Return Permutation - String
                            * Print Permutations
      



*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************


6) Time & Space Complexity Analysis
*************************************
      * Time Complexity:- i)  Best case
                          ii) Avg case
                          iii)worst case
      * MCQs
      *Assignments:    * Find the unique element
                       * Duplicate in Array
                       * Array Intersection
                       * Pair Sum in Array  ✖✖
                       * Triplet Sum  ✖✖
                       * Rotate Array ✖✖
                       * Check Array Rotation ✖✖




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

7) Test-1
**********
      * MCQs
      * Does s contain t?
      * Maximum profit on App
      * Split Array ✖✖




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

8) OOPs-1
**********
      * What is OOPs?
      * Class & Objects
      * Data Members & member functions
      * Access Modifiers - i)  public
                           ii) private
                           iii)protected
      * Getter & Setter
      * Constructor   - i) Default 
                        ii)Parameterized
      * Destructors
      * this keyword
      * Fraction class
      * Complex Number Class
      * MCQs
      problem:
      --------
           * Complex Number Class



*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

9) OOPs-2
**********
      * Shallow & Deep Copy
      * Copy constructor
      * Initialisation List
      * Constant Function
      * Static member
      * Operator Overloading
      * Dynamic Array Class
      
      problem
      -------
           * Polynomial class 




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

10) Linked List 1
*******************
      * Advantages of Array
      * Disadvantages of Array
      * Advantages of LL
      * Linked List:  > Node class
                      > Input of LL
                      > Print of LL
                      
      * Types of LL:  * Singly LL
                      * Doubly LL
                      * Circular LL
               
      * Operation of LL:  -------> Iteratively
                          -------> Recursively
             * Insertion of Node:  
                  > At beginning
                  > At last
                  > At middle anywhere
             * Deletion of Node:   
                  > Deletion of Head pointer
                  > Deletion of any Node
      * MCQs
      
      problems:
      ---------
          * Length of LL
          * print ith Node
          * Delete Node
          * Length of LL (recursively)
          * Insert Node (recursively)
          * Delete Node (recursively)
          * Assignment:  * Find a Node in LL
                         * Append Lat N to First
                         * Eliminate duplicate from LL
                         * print reverse LL
                         * Palindrome LL





*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

11) Linked List 2
******************
      * Mid point of LL
      * Merge two sorted LL
      * Merge sort over LL
      * Reverse LL ------> recursively
                   ------> iteratively
      *MCQs
      problems:
      ---------
           * Mid-point of LL
           * Merge two Sorted LL
           * Merge Sort
           * Reverse LL (recursive)
           * Reverse LL (iteratively)
           * Assignment:  * Find a Node in LL (recursive)
                          * Even after Odd LL
                          * Delete Every N Nodes
                          * Swap two Nodes of LL
                          * k Reverse
                          * Bubble Sort (iterative) LL




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************


12) Stacks & Queues
********************
      * Abstract Data Type (ADT)
      * Types of Data Abstraction: ---------> Procedural Abstraction
                                   ---------> Modular(File) Abstraction
                                   ---------> Object-Oriented Programming (OOPs)
      * Templates
      * Stacks:  * Linear Data structure
                 * Abstract Data Type
                 * Recursive type data structure
                 * LIFO
                 * Implementation: ---------> Stack using Array
                                   ---------> Stack using LL
                 * Dynamic Stack
                 * Operation:  * push(), pop(), top(), Size(), isEmpty()
                 * Inbuilt Stack 
                   Ex: #include<stack>
                       stack<int> st;  --------------------->  //object of class stack.
                       i)  st.push()
                       ii) st.pop()
                       iii)st.top()
                       iv) st.size()
                       v) st.empty()

      * Queues:  * Abstract Data type
                 * FIFO
                 * Implementation: ---------> Queue using Array.
                                   ---------> Queue using LL.
                 * Dynamic Queue
                 * Operations:  * Enqueue(), Dequeue(), front(), getSize(), isEmpty()
                 * Inbuilt Queue:
                   Ex:- #include<queue>
                        queue<int> q;  ---------------------> //object of class queue.
                        i)  q.push()
                        ii) q.pop()
                        iii)q.front()
                        iv) q.size()
                        v) q.empty()

      problems:
      ---------
        * MCQs
        * Stack using LL
        * Balanced Parenthesis
        * Queue using LL
        * Assignment: * Reverse a Stack
                      * Reverse Queue
                      * Check Redundant Brackets.
                      * Stock Span
                      * Minimum bracket Reversal
                 



*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

13) Test-2
***********
      * Next Number
      * Dequeue
      * Delete Alternate Nodes
      


*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

14) Trees
***********
      * Non-Linear Data Structure.
      * Basic Terminologies: ---------> Root Node
                             ---------> Leaf Node
                             ---------> Subtree
                             ---------> Parent Node
                             ---------> Ancestor Node
                             ---------> Path
                             ---------> Degrees
                             
      * Types of Tree:  i) General Tree ✔
                       ii) Forests ✖
                      iii) Binary Tree ✔
                       iv) Binary Search Tree (BST) ✔
                        v) Expression Tree ✖
                        
      * Generic Tree:  * TreeNode class
                       * Taking input: i) Recursive
                                      ii) Level wise
                       * print(): i) Recursively
                                 ii) Level Wise
                       * Count total Nodes
                       * Heigth of Tree
                       * Depth of Tree
                       * Count Leaf nodes
                       * Traversal -----------> * Level order Traversal
                                   -----------> * Pre-order Traversal
                                   -----------> * Post-order Traversal
                                   -----------> * Inorder Traversal
                     
      problems:
      ---------
         * Print Level Wise
         * Find Sum of Nodes
         * Max Data Node
         * Find Height
         * Count Leaf Nodes
         * Post Order Traversal
         * Assignment:  * Contain X
                        * Count Nodes
                        * Node with maximum child sum
                        * Structurally identical
                        * Next Larger
                        * Second Largest Element in Tree
                        * Replace with depth
                        
                   
                   
                   
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
                        
15) Binary Trees
******************
      problems:
      ---------
         * Print Level wise
         * Find a Node
         * Heigth of Binary Tree
         * Mirror
         * Preorder Binary Tree
         * Postorder Binary Tree
         * Construct Tree from Preorder
         * Construct Tree from Postorder
         * MIn and Max of Binary Tree
         * Assignment:  * Sum of Nodes
                        * Check Balanced
                        * Level Order Traversal
                        * Remove Leaf Nodes
                        * Level wise LL
                        * ZigZag Tree
                        * Nodes without siblings




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
                        
16) Binary Search Tree
************************
      problems:
      ---------
         * Search in BST
         * Print Elements in Range
         * Check if a binary tree is BST
         * Construct BST from a Sorted Array
         * BST to sorted LL
         * Find path in BST
         * BST class
         * Assignments:-   * Create & Insert duplicate node
                           * Pair Sum Binary Tree
                           * LCA of binary Tree
                           * LCA of BST
                           * Largest BST
                           * Replace with Sum of greater nodes
                           * Path Sum Root to Leaf
                           * Print nodes at distance k from node
                           * Pair sum in a BST



*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
     
17) Test - 3
*************
      * Check cousins
      * Longest leaf to root path
      * Remove Leaf nodes in tree




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
     
18) Priority Queues
********************
      * What is Priority Queue?
      * ways to implement PQ
      * heaps
      * Complete Binary Tree(CBT) & its implementation
      * Insert & Delete in Heaps
      problems:
      ---------
         * Remove min
         * Max Priority Queue
         * In-place Heap Sort
         * K smallest Elements
         * K Largest Elements
         * Assignments:-   * Check Max-Heap
                           * Kth Largest Element
                           * Merge K Sorted arrays
                           * Running Median
                           * Buy The Ticket




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
 
19) Hashmaps
*************
      * Introduction
      * Inbuilt hashmaps
      * Remove Duplicates
      * Iterators
      * Bucket Array & Hash function
      * Collision Handling
      * Rehashing
      * Hashing Implementation - Insert
      * Hashing Implementation - Delete & Search
      * Time Complexity & Load Factor
      problems:
      ---------
         * Maximum Frequency Number
         * Print Intersection
         * Pair Sum to 0
         * Assignments:-   * Extract Unique characters
                           * Longest Consecutive Sequence
                           * Pairs with difference K
                           * Longest subset zero sum
                           
                           
                           
                           
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
 
20) Tries and Huffman Coding
*****************************
      * Introduction to Tries
      * TrieNode class
      * Insert
      * Search
      * Remove
      * Types of Tries:
      * Huffman Coding
      
      problems:
      ---------
         * Search in Tries
         * Assignments:-   * Pattern Matching
                           * Palindrome Pair
                           * Auto Complete




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
 
21) Backtracking
*****************
      problems:
      ---------
         * N-Queen Problem
         * Rat In a Maze Problem
         * Crossword Problem
         * Assignments:-   * Sudoku Solver
                           * Subset Sum




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
 
22) DP - 1
***********
      problems:
      ---------
         * Min Steps to 1
         * Min Steps to 1 using DP
         * Staircase using DP
         * Minimum Count
         * No of Balanced BTs
         * No. of balanced BTs using DP




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

23) DP - 2
***********
      problems:
      ---------
         * Min Cost Path
         * Edit Distance (Brute-Force)
         * Edit Distance (Memoization and DP)
         * Knapsack (Brute-Force)
         * Knapsack (Memoization and DP)
         * Assignments:-   * Loot Houses
                           * Longest Increasing Subsequence
                           * All possible ways
                           * Ways To Make Coin Change
                           * Matrix Chain Multiplication
                           * Coin Tower
                           * Maximum Square Matrix With All Zeros
                           * Shortest Subsequence




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

24) Graphs 1
*************
      * Introduction
      * Terminology
      * Implementation
      * DFS - Adjasency Matrix
      * BFS Traversal
      problems:
      ---------
         * BFS Traversal
         * Has Path
         * Get Path - DFS
         * Get Path - BFS
         * Is Connected ?
         * All connected components
         * Assignments:-   * Islands
                           * Coding Ninjas
                           * Connecting Dots
                           * Largest Piece
                           * 3 Cycle




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

25) Graphs 2
*************
      problems:
      ---------
         * Kruskal's Algorithm
         * Prim's Algorithm
         * Dijkstra's Algorithm




*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

26) OOPs - 3
*************
      * Abstraction & Encapsulation
      * Inheritance
      * Types of Inheritance:
      * Polymorphism
      * Types of Polymorphism:-------------> Compile Time
                              -------------> Run Time
      * Virtual function & Abstract Class
      * Friend Functions & Class





*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************









1) The Worst case(s) occur in linear search algorithm when -
   a) Item is somewhere in the middle of the array
   b) Item is the last element in the array ✔
   c) Item is present at first index of the array.
   d) Item is not in the array at all ✔
   
   
**************************************************************************************************************************************************************************

2) The worst case time complexity of Linear search is :
   a) O(n) ✔
   b) O(n^2)
   c) O(nlogn)
   d) O(logn)
     
     
**************************************************************************************************************************************************************************

3) Worst case time complexity of insertion sort is ?
   a) O(N)
   b) O(N^2) ✔
   c) O(NLogN)
   d) O(LogN)
  
  
**************************************************************************************************************************************************************************

4) Worst case time complexity of Selection sort is ?
   a) O(N)
   b) O(N^2) ✔
   c) O(NLogN)
   d) O(LogN)
  
  
**************************************************************************************************************************************************************************

5) Two main measures for the efficiency of an algorithm are -
   a) Processor and memory
   b) Complexity and capacity
   c) Time and space ✔
   d) Data and space
   
   
***********************************************************************************************************************************************************************

6) In theoretical analysis the time factor when determining the efficiency of algorithm is measured by -
   a) Counting microseconds
   b) Counting the number of statements in code
   c) Counting the number of unit operations ✔
   d) Counting the kilobytes of algorithm
   
   
***********************************************************************************************************************************************************************

7) If the number of primary operations of an algorithm that takes an array of size n as input are 3n^2 + 5n. The worst case time complexity of the algorithm will be ?
   a) O(n^3)
   b) O((n^2)*logn)
   c) O(n^2) ✔
   d) O(n)
  
  
***********************************************************************************************************************************************************************

8) What will be the Time Complexity of following code in terms of ‘n’ ?
   Refer the code for C++ -
   for(int i = 0; i < n; i++)
   {
      for(; i < n; i++)
      {
         cout << i << endl;
      }
   }

   a) O(n) ✔
   b) O(n^2)
   c) O(logn)
   d) O(nlogn)
     
     
 **********************************************************************************************************************************************************************
 
 9) What will be the Time Complexity of following code in terms of ‘n’ ?
    Note : Assume k to be a constant value
    Refer the code in C++ -
    for(int i = 0; i < n; i++){
       for(int j = 1 ; j < k; j++){
        cout << (i + j ) << endl;
       }
    }

    a) O(n^2)
    b) O(n) ✔ 
    c) O(logn)
    d) None of these
    
    
 **********************************************************************************************************************************************************************
 
 10) For merging two sorted arrays of size m and n into a sorted array of size m+n, we require operations -
     a) O(m * n)
     b) O(m + n) ✔
     c) O(m) if m >= n
     d) O(n) if n > m
  
  
 *********************************************************************************************************************************************************************
 
 11) Worst case time complexity of Binary Search is ?
     a) O(N)
     b) O(N^2)
     c) O(NLogN)
     d) O(LogN) ✔
     
     
 **********************************************************************************************************************************************************************
 
 12) What is the recurrence relation for merge sort :
     a) T(n) = 2T(n/2)
     b) T(n) = 2T(n/2) + k
     c) T(n) = 2T(n/2) + O(n) ✔
     d) T(n) = 2T(n/2) + O(log n)
       
       
 **********************************************************************************************************************************************************************
 
 13) What is the time complexity of merge sort :
     a) O(n)
     b) O(n^2)
     c) O(nlogn) ✔
     d) O(log n)
       
       
 **********************************************************************************************************************************************************************
 
 14) What is the time complexity of following code ?
     int multiplyRec(int m, int n)
     {
        if(n == 1)
           return m;
        return m + multiplyRec(m,  n - 1);  
     }

     a) O(m*n)
     b) O(n) ✔
     c) O(n^2)
     d) O(m)
       
       
 **********************************************************************************************************************************************************************
 
 15) What is the time complexity of following code ?
     int sumOfDigits(int n)
     {
        int sum;
        if(n < 10)
        {
            return n;
        }
        sum = (n % 10) + sumOfDigits(n / 10);
        return sum;
     }

     a) O(logn) - log is to the base 10 ✔
     b) O(n)
     c) O(n^2)
     d) None of these
     
     
 **********************************************************************************************************************************************************************
 
 16) What is the time complexity of following code for calculating nth fibonacci number
     long fib(int n)
     {
        if(n == 0 || n == 1)
        {
           return n;
        }
        return fib(n - 1) + fib(n - 2);
     }

     a) O(n)
     b) O(n^2)
     c) O(2^n) ✔ 
     d) O(n^3)
       
       
 **********************************************************************************************************************************************************************
 
 17) The space complexity for merge sort is :
     a) O(n) ✔
     b) O(n^2)
     c) O(nlogn)
     d) O(log n)
       
       
 **********************************************************************************************************************************************************************
 
 18) The space complexity for finding nth fibonacci number using recursion is :
     a) O(n) ✔
     b) O(2^n)
     c) O(log n)
     d) O(n^2)
     e) O(nlogn)
       
       
 *********************************************************************************************************************************************************************
 *********************************************************************************************************************************************************************
 

  
  
  
  
  
  
  
  
  
  
  
  

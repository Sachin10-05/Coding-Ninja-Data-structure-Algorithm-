/*
problem:
*********
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.

Sample Input:
3
15 20 12

Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 
*/





******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************

* Subset or Powerset or Subsequence
* Total possible subsets = 2^N
* Approach to solve :  i) Backtracking 
                       ii)Bit Masking
                       
  
  
  
  
  

******************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************



* soluton-1
* using Backtracking
* Time complexity = O(2^N)
* Space Complexity = O(N)
*******************************



void allSubsets(int *arr, int size, int i, int *output, int j)
{
    //base case
    if(i==size)
    {
        for(int a=0;a<j;a++)
            cout << output[a] << " ";
        cout << endl;
        return;
    }
    
    //Inclusion
    output[j] = arr[i];
    allSubsets(arr, size, i+1, output, j+1);
    
    //Exclusion
    allSubsets(arr, size, i+1, output, j);
}




void printSubsetsOfArray(int input[], int size) 
{
   // Write your code here
   int output[1000];
   int i=0;   //for traversing in input array
   int j=0;   //for traversing in output array
   allSubsets(input, size, i, output, j);
}


int main() 
{
   int input[1000];
   int length;
   cin >> length;
   for(int i=0; i < length; i++)
      cin >> input[i];
   printSubsetsOfArray(input, length);
}









*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************


* solution-2
* using Bitmasking
* Time Complexity: O(N*(2^N))
* Space Complexity: O(N)
***********************************


........

























                       


/*
problm:
********
You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some number 'K' in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.

Constraints :
    1 <= t <= 10^2
    0 <= N <= 10^5
    Time Limit: 1 sec
    
Sample Input 1:
1
6
5 6 1 2 3 4

Sample Output 1:
2
*/





******************************************************************************************************************************************************************************

//solution-1
**************

* uisng Binary Search (Iteratively)
* Time Complexity : O(logn) 
* Space Complexity : O(1)


int arrayRotateCheck(int arr[],int n)
{
   int start = 0;
   int end = n-1;
   while(start <= end)
   {
      int mid = start + (end-start)/2;
      if (arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1])
         return mid;
      else if(arr[mid] < arr[end])
         end = mid-1;
      else
         start = mid+1;
    }
}





***************************************************************************************************************************************************************************

//solution-2
*************

* using Binary Search (recursively)
* Time Complexity: O(log N) 
* Auxiliary Space: O(log N)  [this is the space of recursion stack]


int helper(int *arr, int start, int end)
{
   if(start > end)
      return 0;
    
   if(start == end)
      return start;
    
   int mid = (start + end)/2;
   if(arr[mid] < arr[mid-1])
      return mid;
    
   if(arr[mid] > arr[mid+1])
      return mid+1;
        
   if(arr[end] > arr[mid])
      return helper(arr,start,mid-1);
   else
      return helper(arr,mid+1,end);
}


int arrayRotateCheck(int arr[],int n)
{
   int start = 0;
   int end = n-1;
   return helper(arr,start,end);
}





****************************************************************************************************************************************************************************

//solution-3
**************

* using Linear Search
* T.C = O(N)
* S.C = O(1)


/*
#include<bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
      if(arr[i] > arr[i+1])
         return i+1;
   }
   return 0;
}


nt main()
{
   int t;
	 cin >> t;
	 while (t--)
	 {
      int size;
		  cin >> size;
		  int *input = new int[size];
      for (int i = 0; i < size; i++)
		  {
			   cin >> input[i];
		  }

		  cout << arrayRotateCheck(input, size) << endl;
		  delete[] input;
	 }
	 return 0;
}
*/
  





***************************************************************************************************************************************************************************












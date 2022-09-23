/*
problem:
*********
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.

Sample Input :
6
2 3 4 5 6 8 
5 

Sample Output:
3
*/




******************************************************************************************************************************************************************************

//solution:
************

* Time Complexity:  O(log(N))
* Space Complexity: O(log(N))
  
  
#include<bits/stdc++.h>
using namespace std;
    
int helper(int arr[], int s, int e, int val)
{
   int mid = (s + e)/2;
    
   //base case
   if(s > e)
      return -1;
   if(arr[mid] == val)
      return mid;
    
   if(arr[mid] > val)
   {
      return helper(arr, s, mid-1, val);
   }
   else
   {
      return helper(arr, mid+1, e, val);
   }
}


int binarySearch(int arr[], int n, int val)
{
   int start = 0;
   int end = n-1;
   return helper(arr,start,end,val);
}


int main() 
{
   int input[100000],length,element, ans;
   cin >> length;
   for(int i =0;i<length;i++)
   { 
      cin >> input[i];;
   }

   cin >> element;
   ans = binarySearch(input, length, element);
   cout<< ans << endl;
}





***************************************************************************************************************************************************************************








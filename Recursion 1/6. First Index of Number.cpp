/*
problems:
*********

Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. 
Return -1 if it is not present in the array. First index means, the index of first occurrence of x in the input array.

Sample Input :
4
9 8 10 8
8
Sample Output :
1
*/





***************************************************************************************************************************************************************************


//solution-1:
//without using any helper function
************************************

#include<bits/stdc++.h>
using namespace std;

int firstIndex(int *arr, int n, int x)
{
   static int i=0;
   //base case
   if(n==0)
      return -1;
   if(arr[0] == x)
      return i;
   i++;
   return firstIndex(arr+1, n-1, x);
}


int main()
{
   int n;
   cin >> n;
  
   int *input = new int[n];
   for(int i = 0; i < n; i++) 
   {
      cin >> input[i];
   }
    
   int x;
   cin >> x;
    
   cout << firstIndex(input, n, x) << endl;
}






*************************************************************************************************************************************************************************

//solution-2
//using helper function
************************


#include<bits/stdc++.h>
using namespace std;

int help(int arr[], int n, int x, int i)
{
   if(n==0)
      return -1;
   if(n==x)
      return i;
   help(arr+1, n-1, x, i+1);
}


int firstIndex(int *arr, int n, int x, int i)
{
   int i=0;
   int ans = help(help, n, x, i);
   return ans;
}


int main()
{
   int n;
   cin >> n;
  
   int *input = new int[n];
   for(int i = 0; i < n; i++) 
   {
      cin >> input[i];
   }
    
   int x;
   cin >> x;
    
   cout << firstIndex(input, n, x) << endl;
}







***************************************************************************************************************************************************************************


















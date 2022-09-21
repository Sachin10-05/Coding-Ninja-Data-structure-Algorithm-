/*
problems:
*********

Given an array of length N, you need to find and return the sum of all elements of the array.

Sample Input 1 :
3
9 8 9
Sample Output 1 :
26

Sample Input 2 :
3
4 2 1
Sample Output 2 :
7    
*/






*****************************************************************************************************************************************************************************

//solution:
***********

#include<bits/stdc++.h>
using namespace std;

int sum(int *arr, int n)
{
   //base case
   if(n==0)
      return 0;
   return arr[0] + sum(arr+1,n-1);
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
   cout << sum(input, n) << endl;
}







****************************************************************************************************************************************************************************















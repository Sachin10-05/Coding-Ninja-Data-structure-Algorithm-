/*
problems:
**********

Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.

Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true
*/





***************************************************************************************************************************************************************************


//solution:
************


#include<bits/stdc++.h>
using namespace std;

bool checkNumber(int *arr, int n, int x)
{
   //base case
   if(n==0)
      return false;
   
   if(arr[0] == x)
      return true;
	
   return checkNumber(arr+1, n-1, x);
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
    
   if(checkNumber(input, n, x)) 
   {
      cout << "true" << endl;
   }
   else 
   {
      cout << "false" << endl;
   }
}








***************************************************************************************************************************************************************************







/*
problem
********

You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^6
Time Limit: 1 sec

Sample Input 1:
1
7
2 3 1 6 3 6 2

Sample Output 1:
1
*/





******************************************************************************************************************************************************************************

//solution
***********


// Time Complexiity : O(n)
// Space COmplexity : O(1)


#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n)
{
   int ans = arr[0];
   for(int i=1;i<n;i++)
   {
      ans = ans^arr[i];
   }
   return ans;
}



int main() 
{
   int t;
   cin >> t;

   while(t--) 
   {
      int size;
      cin >> size;
      int *input = new int[size];
      for (int i = 0; i < size; ++i) 
      {
         cin >> input[i];
      }
      cout << findUnique(input, size) << endl;
    }
    return 0;
}





***************************************************************************************************************************************************************************

















































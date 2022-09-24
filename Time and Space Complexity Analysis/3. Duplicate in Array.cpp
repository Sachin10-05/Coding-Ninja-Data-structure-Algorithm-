/*
problem:
*********
You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). 
Each number is present at least once. 
That is, if N = 5, the array/list constitutes values ranging from 0 to 3, and among these, there is a single integer value that is present twice. 
You need to find and return that duplicate number present in the array.

Constraints :
    1 <= t <= 10^2
    0 <= N <= 10^6
    Time Limit: 1 sec

Sample Input 1:
1
9
0 7 2 5 4 7 1 3 6

Sample Output 1:
7
*/




******************************************************************************************************************************************************************************

//solution
***********

// Time Complexiity : O(n)
// Space COmplexity : O(1)


#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int *arr, int n) 
{
   //Write your code here
	 //we know range of intergers is from 0 to n- 2
   int ans = 0;
   for(int i=0;i<n;i++)
      ans = ans^arr[i];
    
   for(int i=0;i<=n-2;i++)
      ans = ans^i;
   return ans;
}


int main()
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
      cout << findDuplicate(input, size) << endl;
	  }
    return 0;
}





***************************************************************************************************************************************************************************



















/*
problem:
--------
A child is running up a staircase with n steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the 
child can run up to the stairs. You need to return all possible number of ways.
Time complexity of your code should be O(n).
Since the answer can be pretty large print the answer % mod(10^9 +7)

Input Format:
  First line will contain T (number of test case).
  Each test case is consists of a single line containing an integer N.

Output Format:
  For each test case print the answer in new line

Constraints :
  1 <= T < = 10
  1 <= N <= 10^5

Sample input 1
2
2
3
Sample output 1
2
4
Explanation of sample input 1:
Test case 1:
  To reach at top of 2nd stair, we have only two options i.e (2), (1,1)
Test case 2:
  To reach at top of 3rd stair, we have four options i.e (1,1,1), (1,2) ,(2,1), (3)

Sample input 2:
2
5
10
Sample output 2:
13
274
*/





***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************

//solution-1:
-------------

#include <iostream>
using namespace std;
typedef long long int ll;
const ll m = 1e9 + 7;

int modAdd(ll a, ll b) 
{
  return (int)((a % m + b % m) % m);
}

int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
      int n;
      cin>>n;
      
      int *arr = new int[n + 1]{0};
      arr[0] = 1;
      // 1 1 2 4 7 13
      // for(int i = 0; i <= n; i++) {
      //   if(i < n) arr[i + 1] = modAdd(arr[i + 1], arr[i]);
      //   if(i < n - 1) arr[i + 2] = modAdd(arr[i + 2], arr[i]);
      //   if(i < n - 2) arr[i + 3] = modAdd(arr[i + 3], arr[i]);
      // }
      arr[1] = 1;
      arr[2] = 2;
      for(int i = 3; i <= n; i++) 
      {
        arr[i] = modAdd(arr[i - 1], modAdd(arr[i - 2], arr[i - 3]));
      }
      
      cout<<arr[n]<<endl;
      
      delete[] arr;
    }
    return 0;
}





***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************

//solution-2:
-------------

#include<bits/stdc++.h>
using namespace std;

long staircase(int n) 
{
    long * dp = new long[n + 1];
    if (n == 0)
    	return 1;
    
    if (n == 1 || n == 2 || n<0)
    	return n;
  	dp[0] = 1;
  	dp[1] = 1;
  	dp[2] = 2;

  	for (int i = 3; i < n + 1; i++) 
    {
    	dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
  	return dp[n];
}


int main()
{
    // write your code here
    int t;  //no of test cases
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << staircase(n) << endl;
    }
}




***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************















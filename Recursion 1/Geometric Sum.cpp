/*
problem:
*********

Given k, find the geometric sum i.e.
	series: 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
	
Sample Input 1 :
3
Sample Output 1 :
1.87500

Sample Input 2 :
4
Sample Output 2 :
1.93750
*/





***************************************************************************************************************************************************************************


//solution:
************

#include<bits/stdc++.h>
using namespace std;

double geometricSum(int k)
{
   //base case
   if(k==0)
      return 1;
   return (1/pow(2,k) + geometricSum(k-1));
}


int main() 
{
   int k;
   cin >> k;
   cout << fixed << setprecision(5);
   cout << geometricSum(k) << endl;   
}






***************************************************************************************************************************************************************************



















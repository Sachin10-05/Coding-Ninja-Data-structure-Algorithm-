/*
problems:
**********

Given the number 'n', find out and return the number of digits present in a number recursively.

Sample Input 1 :
156
Sample Output 1 :
3

Sample Input 2 :
7
Sample Output 2 :
1
*/






*****************************************************************************************************************************************************************************

//solutions-1:
**************

#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
   //base case
   if(n==0)
      return 0;
   return 1 + count(n/10);
}

int main()
{
   int n;
   cin >> n;
   cout << count(n) << endl;
}






****************************************************************************************************************************************************************************

//solution-2
*************

#include<cmath>
int count(int n)
{
   return log10(n) + 1;
}







***************************************************************************************************************************************************************************












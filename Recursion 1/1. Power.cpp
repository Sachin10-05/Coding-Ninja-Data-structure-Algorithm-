/*
problem:
*********
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.

Sample Input 1 :
3 4
Sample Output 1 :
81

Sample Input 2 :
2 5
Sample Output 2 :
32
*/






******************************************************************************************************************************************************************************


//solution-1
*************

#include<bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
   //base case
   if(y==0)
      return 1;
   return x*power(x,y-1);
}

int main()
{
   int x,y;
   cin >> x >> y;
   cout << power(x,y);
   return 0;
}






******************************************************************************************************************************************************************************

//solution-2
//(optimized solution)
************************

* Hint: ans = power(a,b/2)
* Now, if b is Even: ans*ans
       if b is odd: a*ans*ans
       
       
int power(int a,int b)
{
   //BASE CASE
   if(b==0)
      return 1;
   if(b==1)
      return a;
    
   //RECURSIVE CALL
   int ans = power(a,b/2);
   if(b%2 == 0)
      return ans*ans;
   else
      return a*ans*ans;
}






***************************************************************************************************************************************************************************












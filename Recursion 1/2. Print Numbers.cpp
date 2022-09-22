/*
problems:
**********
Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.

Sample Input 1 :
6
Sample Output 1 :
1 2 3 4 5 6

Sample Input 2 :
4
Sample Output 2 :
1 2 3 4
*/







*****************************************************************************************************************************************************************************

//solution-1:
**************

//Head Recursion:- some processing/ small calculations are done after recursion call.
-----------------

#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
   //base case
   if(n==0)
      return;
   
   //recurrence relation
   print(n-1);
   
   //processing
   cout << n << " ";
}


int main()
{
   int n;
   cin >> n;
   print(n);
   return 0;
}






*****************************************************************************************************************************************************************************

//solution-2:
**************

//Tail Recursion:- some processing/ small calculations are done before recursion call.
*Note: If we declare a variable as static, it exists till the end of the program once initialized.

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
   static int i=1;
   if(n==0)
      return;
   cout << i << " ";
   i++;
   print(n-1);
}


int main()
{
   int n;
   cin >> n;
   print(n);
}






****************************************************************************************************************************************************************************

























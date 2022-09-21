/*
problems:
**********

Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Constraints :  0 <= N <= 10^9

Sample Input 1 :
0
Sample Output 1 :
1

Sample Input 2 :
00010204
Sample Output 2 :
2

Sample Input 3 :
708000
Sample Output 3 :
4
*/





***************************************************************************************************************************************************************************

//solution:
************

int count(int n)
{
   static int c = 0; //count of zeros
   //base case
   if(n==0)
      return c;
   if(n%10 == 0)
      c++;
   return count(n/10);
}


int countZeros(int n)
{
   //Edge case
   if(n==0)
      return 1;
   else
      return count(n);
}


int main() 
{
   int n;
   cin >> n;
   cout << countZeros(n) << endl;
}






***************************************************************************************************************************************************************************














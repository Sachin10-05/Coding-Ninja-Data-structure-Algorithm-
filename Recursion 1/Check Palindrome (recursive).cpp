/*
problems:
**********

Check whether a given String S is a palindrome using recursion. Return true or false.

Sample Input 1 :
racecar
Sample Output 1:
true

Sample Input 2 :
ninja
Sample Output 2:
false
*/





***************************************************************************************************************************************************************************

//solution-1:
**************

#include<bits/stdc++.h>
using namespace std;

bool helper(char arr[], int start, int end)
{
   //base case
   if(start >= end)
      return true;
   if(arr[start] != arr[end])
      return false;
   return helper(arr,start+1,end-1);
}


bool checkPalindrome(char arr[])
{
   int n = strlen(arr);
   int start = 0;
   int end = n-1;
   if(n==0)
      return true;
   else
      return helper(arr,start,end);
}


int main() 
{
   char input[50];
   cin >> input;
    
   if(checkPalindrome(input)) 
   {
      cout << "true" << endl;
   }
   else 
   {
      cout << "false" << endl;
   }
}






***************************************************************************************************************************************************************************















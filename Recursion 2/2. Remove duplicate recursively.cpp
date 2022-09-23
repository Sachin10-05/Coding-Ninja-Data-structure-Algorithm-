/*
Problem:
*********

Given a string S, remove consecutive duplicates from it recursively.

Constraints :
      1 <= |S| <= 10^3
      where |S| represents the length of string
      
Sample Input:
xxxyyyzwwzzz

Sample Output:
xyzwz
*/



******************************************************************************************************************************************************************************

//solution:
************

#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char arr[])
{
   //base case
   if(arr[0] == '\0')
      return;
        
   if(arr[0] == arr[1])
   {
      int i;
      for(i=1; arr[i] != '\0'; i++) 
         arr[i - 1] = arr[i];
      arr[i-1] = '\0';
      removeConsecutiveDuplicates(arr);
   }
   else
   {
      removeConsecutiveDuplicates(arr+1);
   }
}


int main() 
{
   char s[100000];
   cin >> s;
   removeConsecutiveDuplicates(s);
   cout << s << endl;
}






***************************************************************************************************************************************************************************







/*
problem:
*********

Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.

Constraints : 1 <= Length of String S <= 10^6

Sample Input :
abacd
a x

Sample Output :
xbxcd
*/





******************************************************************************************************************************************************************************

//solution:
************


#include<bits/stdc++.h>
using namespace std;

void replaceCharacter(char arr[], char c1, char c2)
{
   //base case
   if(arr[0] == '\0')
      return;
    
   if(arr[0] == c1)
      arr[0] = c2;
    
   return replaceCharacter(arr+1, c1, c2);
}


int main() 
{
   char input[1000000];
   char c1, c2;
   cin >> input;
   cin >> c1 >> c2;
   replaceCharacter(input, c1, c2);
   cout << input << endl;
}






***************************************************************************************************************************************************************************













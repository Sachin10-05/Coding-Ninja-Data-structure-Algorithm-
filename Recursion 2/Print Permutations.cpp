/*
problem:
*********
Given an input string (STR), print all possible permutations of the input string.

Constraint:
    1<=length of STR<=8
    Time Limit: 1sec
    
Sample Input 1:
cba

Sample Output 1:
abc
acb
bac
bca
cab
cba
*/




******************************************************************************************************************************************************************************

* solution
* using backtracking
* T.C = O(N*N!)
* S.C = O(l-r)
****************************




#include<bits/stdc++.h>
using namespace std;

void helper(string s, int index)
{
   //base case
   if(index >= s.size())
   {
      cout << s << endl;
      return;
   }
    
   for(int i=index;i<s.size();i++)
   {
      swap(s[index], s[i]);
      helper(s, index+1);
      swap(s[index], s[i]);  //backtrack step
   }
}


void printPermutations(string s)
{
   int index = 0;
   helper(s, index);
}


int main() 
{
   string input;
   cin >> input;
   printPermutations(input);
   return 0;
}






***************************************************************************************************************************************************************************





















* Subsequences of string (similar to powerset/subset of array)
* Total possibility = 2^N

/*
input: 
abc

output:
" " (don't include empty string in output)
c
b
bc
a
ac
ab
abc
*/



******************************************************************************************************************************************************************************

//solution:
//using backtracking
//T.C = O(2^N)
//S.C = O(N)
************************


#include<bits/stdc++.h>
using namespace std;

void helper(string str, string output, int i, vector<string> &ans)
{
   //base case
   if( i >= str.length())
   {
      if(output.length() > 0)
         ans.push_back(output);
      return;
   }
  
   //Inclusion
   output.push_back(str[i]);
   helper(str, output, i+1, ans);
  
   //Exclusion
   helper(str, output, i+1, ans);
}



vector<string> subsequences(string str)
{
   vector<string> ans;
   string output = "";
   int i = 0;
   helper(str, output, i, ans);
   return ans;
}
  
  
  
  
  
****************************************************************************************************************************************************************************
  
  
  
//solution-2
//using Bitmasking
//T.C = O(N*(2^N))
//S.C = O(N)
*************************
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  


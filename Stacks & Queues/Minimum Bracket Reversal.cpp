/*
problem:
********
For a given expression in the form of a string, find the minimum number of brackets that can be reversed in order to make the expression balanced. 
The expression will only contain curly brackets. If the expression can't be balanced, return -1.

Sample Input 1:
{{{
Sample Output 1:
-1

Sample Input 2:
{{{{}}
Sample Output 2:
1
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
***********

* MINIMUM BRACKET REVERSAL
* Algo:
/*
   * length of given string must be even.
   * Remove valid expression from string i.e, '{ }'.
   * Then there will be 3 cases:
     i)  all brackets are closed i.e, }}}} ----------------------------------------> o/p = count/2
     ii) all brackets are open i.e, {{{{   ----------------------------------------> o/p = count/2
     iii)some are closed and some will be open i.e, }}} {{{  or }}}} {{{{ ---------> 
*/



#include <iostream>
#include <string>
#include <stack>
using namespace std;


int countBracketReversals(string s)
{
   int n = s.length();
   if(n%2 == 0)
   {
      stack<char> st;
      for(int i=0;i<n;i++)
      {
         char ch = s[i];
         if(ch=='{')
            st.push(ch);
         else
         {
            if(!st.empty() && st.top()=='{')
            {
               st.pop();
            }
            else
            {
               st.push(ch);
            }
         }
      }
        
      //stcaks contains invalid expression
      int a = 0;
    	int b = 0;
      while(!st.empty())
      {
         if(st.top() == '{')
            b++;
         else
            a++;
         st.pop();
      }
      int ans = ((a+1)/2) + ((b+1)/2);
      return ans;
   }
    
   else
   {
       return -1;
   }
}


    
int main() 
{
   string input;
   cin >> input;
   cout << countBracketReversals(input);
}







*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************



















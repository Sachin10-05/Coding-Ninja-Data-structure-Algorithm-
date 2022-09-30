/*
problem:
********
For a given a string expression containing only round brackets or parentheses, check if they are balanced or not. 
Brackets are said to be balanced if the bracket which opens last, closes first.

Sample Input 1 :
(()()())
Sample Output 1 :
true

Sample Input 2 :
()()(()
Sample Output 2 :
false
*/





****************************************************************************************************************************************************************************

//solution:
************



#include <iostream>
#include <string>
#include <stack>
using namespace std;


bool isBalanced(string str)
{
   stack<char> st;
   for(int i=0;i<str.length();i++)
   {
      if(str[i]=='(' || str[i]=='{' || str[i]=='[')
         st.push(str[i]);
      else
      {
         if(!st.empty())
         {
            char ch = st.top();
            if((ch=='(' && str[i]==')') || (ch=='{' && str[i]=='}') || (ch == '[' && str[i]==']'))
               st.pop();
         }
         else
         {
            return false;
         }
      }
   }
   if(st.empty())
      return true;
   return false;
}



int main() 
{
   string input;
   cin >> input;
   cout << ((isBalanced(input)) ? "true" : "false");
}







*****************************************************************************************************************************************************************************












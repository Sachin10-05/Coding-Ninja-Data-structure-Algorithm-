/*
problem:
********
For a given expression in the form of a string, find if there exist any redundant brackets or not. 
It is given that the expression contains only rounded brackets or parenthesis and the input expression will always be balanced.
A pair of the bracket is said to be redundant when a sub-expression is surrounded by unnecessary or needless brackets.

Sample Input 1:
a+(b)+c 
Sample Output 1:
true

Sample Input 2:
(a+b)
Sample Output 2:
false
*/





*****************************************************************************************************************************************************************************

//solution:
***********

//Redundant Bracket ---> useless bracket like ((a+b))


#include <iostream>
#include <string>
using namespace std;

bool checkRedundantBrackets(string str)
{
   stack<char> st;
   for(int i=0;i<str.length();i++)
   {
      if(str[i] == '(' || str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
         st.push(str[i]);
      else
      {
         if(str[i]==')')
         {
            bool isRedundant = true;
            while(st.top() != '(')
            {
               if(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/')
                  isRedundant = false;
               st.pop();
            }
            if(isRedundant == true)
               return true;
            st.pop();
         }
      }
   }
   return false;
}



int main() 
{
   string input;
   cin >> input;
   cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}






*****************************************************************************************************************************************************************************
































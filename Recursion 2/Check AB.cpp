/*
problems:
*********
Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'

If all the rules are followed by the given string, return true otherwise return false.

Input format :
String S
Output format :
'true' or 'false'

Constraints :
    1 <= |S| <= 1000
    where |S| represents length of string S.
    
Sample Input 1 :
abb
Sample Output 1 :
true

Sample Input 2 :
abababa
Sample Output 2 :
false
Explanation for Sample Input 2
In the above example, a is not followed by either "a" or "bb", instead it's followed by "b" which results in false to be returned.
*/





****************************************************************************************************************************************************************************

//solution:
***********


#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


bool checkAB(char input[],int count = 0) 
{
   // Write your code here
	 // base case
   if(*input == '\0') 
   {
      return true;
   }
    
   // corner case
   if(!count) 
   {
      if(input[0] != 'a') 
      {
         return false;
      }
   }
    
   //nth step
   //first Rule
   if(input[0] == 'a') 
   {
      if(input[1] == '\0' or input[1] == 'a' or (input[1] == 'b' and input[2] == 'b')) 
      {
         checkAB(input + 1, count + 1);
      } 
      else 
      {
         return false;
      }
   }
    
   // second Rule
   else if(input[0] == 'b' and input[1] == 'b') 
   {
      if(input[2] == 'a' or input[2] == '\0') 
      {
         checkAB(input + 2,count + 1);
      } 
      else 
      {
         return false;
      }
   }
    
}









int main() 
{
   char input[100];
   bool ans;
   cin >> input;
   ans=checkAB(input);
   if(ans)
      cout<< "true" << endl;
   else
      cout<< "false" << endl;
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************























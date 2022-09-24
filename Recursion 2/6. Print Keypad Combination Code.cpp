/*
problem:
*********
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.

Constraints :
1 <= n <= 10^6

Sample Input:
23

Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/





******************************************************************************************************************************************************************************

//solution:
************



#include<bits/stdc++.h>
using namespace std;

void helper(string s, int index, string m[], string ans)
{
   //base case
   if(index >= s.length())
   {
      cout << ans << endl;
      return;
   }
    
   int digit = s[index] - '0';
   string temp = m[digit];
   for(int i=0;i<temp.length();i++)
   {
      ans = ans + temp[i];
      helper(s, index+1,m,ans); //Recursive step
      ans.pop_back();           //backtracking step
   }
}



void printKeypad(int num)
{
   string s = to_string(num);
   string ans;
   int index=0;
   string m[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   helper(s, index, m, ans);
}



int main()
{
   int num;
   cin >> num;
   printKeypad(num);
   return 0;
}






******************************************************************************************************************************************************************************







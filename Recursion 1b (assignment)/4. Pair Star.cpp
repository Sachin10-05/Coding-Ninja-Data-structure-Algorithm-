/*
problems:
**********

Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

Sample Input 1 :
hello
Sample Output 1:
hel*lo

Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a
*/




******************************************************************************************************************************************************************************

//solution:
************


#include<bits/stdc++.h>
using namespace std;

int helper(char *arr, char *ans)
{
   static int i=0;
   //base case
   if(arr[0] == '\0')
      return i;
   if(arr[0] == arr[1])
   {
      ans[i] = arr[0];
      ans[i+1] = '*';
      i += 2;
      return helper(arr+1, ans);
   }   
   else
   {
      ans[i] = arr[0];
      i++;
      return helper(arr+1, ans);
   }
}


void pairStar(char *arr)
{
   char ans[1000];
   int size = helper(arr, ans);
   for(int i=0;i<size;i++)
      arr[i] = ans[i];
   arr[size] = '\0';
}


int main() 
{
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}





***************************************************************************************************************************************************************************

























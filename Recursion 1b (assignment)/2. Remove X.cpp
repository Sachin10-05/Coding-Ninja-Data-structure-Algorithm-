/*
problem
********

Given a string, compute recursively a new string where all 'x' chars have been removed.
Sample Input 1 :
xaxb
Sample Output 1:
ab

Sample Input 3 :
xx
Sample Output 3:

*/





//*************************************************************************************************************************************************************************


//solution-1
*************

#include<bits/stdc++.h>
using namespace std;

int helper(char arr[], char ans[])
{
   static int i=0;
    
   //base case
   if(arr[0]=='\0')
      return i;
   if(arr[0] != 'x')
   {
      ans[i] =  arr[0];
      i++;
   }
   return helper(arr+1, ans);
}


void removeX(char arr[])
{
   char ans[100];
   int size = helper(arr,ans);
   for(int i=0;i<size;i++)
   {
      arr[i] = ans[i];
   }
   arr[size] = '\0';
}


int main() 
{
   char input[100];
   cin.getline(input, 100);
   removeX(input);
   cout << input << endl;
}







***************************************************************************************************************************************************************************



























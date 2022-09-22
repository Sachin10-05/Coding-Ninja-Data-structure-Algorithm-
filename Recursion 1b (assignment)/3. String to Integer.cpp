/*
problem
********

Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, 
you need to convert the string into corresponding integer and return the answer.

Sample Input 1 :
00001231
Sample Output 1 :
1231
*/



//*****************************************************************************************************************************************************************************

//solution-1
*************

int stringToNumber(char arr[])
{
   static int ans = 0;
	
   //BASE CASE
   if(arr[0] == '\0')
      return ans;
   
   //SMALL CALCULATION
   ans = ans*10 + (arr[0]-'0');
	
   //RECURSIVE CALL
   return stringToNumber(arr+1);
}





****************************************************************************************************************************************************************************


//solution-2
*************

#include<bits/stdc++.h>
using namespace std;

void stringToNumber_Actual(char arr[], int &ans) 
{
   if(*temp == '\0') 
      return;
   n = (n * 10) + (*temp - '0') ;
   stringToNumber_Actual(temp + 1, n);
}


int stringToNumber(char input[]) 
{
   // Write your code here
   int answer = 0;
   stringToNumber_Actual(input, answer);
   return answer;
}

int main()
{
   char input[50];
   cin >> input;
   cout << stringToNumber(input) << endl;
}





****************************************************************************************************************************************************************************
























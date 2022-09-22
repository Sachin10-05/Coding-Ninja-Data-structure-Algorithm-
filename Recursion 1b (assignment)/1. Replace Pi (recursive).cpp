/*
Problem
*********

Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :
xpix
Sample Output :
x3.14x

Sample Input 2 :
pipi
Sample Output :
3.143.14

Sample Input 3 :
pip
Sample Output :
3.14p
*/






//**************************************************************************************************************************************************************************

//considering Character Array
*******************************


#include<bits/stdc++.h>
using namespace std;

void replacePi(char arr[])
{
   //base case
   if(arr[0] == '\0')
      return;
    
   if(arr[0]=='p' && arr[1]=='i')
   {
      for (int i = strlen(arr); i >= 2; i--) 
         arr[i + 2] = arr[i];
      arr[0] = '3';
      arr[1] = '.';
      arr[2] = '1';
      arr[3] = '4';
   }
   return replacePi(arr+1);
}


int main() 
{
   char input[10000];
   cin.getline(input, 10000);
   replacePi(input);
   cout << input << endl;
}







//*************************************************************************************************************************************************************************

//considering STRING
//********************

/*
#include<bits/stdc++.h>
using namespace std;

string replacePi(string str)
{
   //BASE CASE
   if(str.length()==0 || str.length()==1)
      return str;
	
   if(str[0] == 'p' && str[1]=='i')
      return "3.14" + replacePi(str.substr(2));
   else
      return str[0] + replacePi(str.substr(1));
}


int main()
{
   string str;
   cin >> str;
   cout << replacePi(str);
}
*/




//**************************************************************************************************************************************************************************























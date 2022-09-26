/*
problem:
*********

Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
Return true or false.
Do it recursively.

Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true

Sample Input 2 :
abcde
aeb
Sample Output 2 :
false
*/





******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************

//solution-1
*************

bool checksequenece(char arr1[], char arr2[])
{
   //base case
   if(arr2[0]=='\0')
      return true;
    
   if(arr1[0]=='\0')
      return false;
    
   if(arr1[0] == arr2[0])
   {
      return checksequenece(arr1+1, arr2+1);
   }
   else
      return checksequenece(arr1+1, arr2);
}







***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************


//solution-2
**************

/*
bool isSubSequence(char *str1, char *str2, int n1, int n2)
{ 
   // base case
   if (n2 == 0) 
      return true; 
    
   // the string is completed
   if (n1 == 0) 
      return false; 
    
   if (str1[n1 - 1] == str2[n2 - 1]) 
      return isSubSequence(str1, str2, n1 - 1, n2 - 1); 
   return isSubSequence(str1, str2, n1 - 1, n2); 
} 


bool checksequenece(char arr1[] , char arr2[]) 
{
    int n1 = strlen(arr1);
    int n2 = strlen(arr2);
    bool ans = isSubSequence(arr1, arr2, n1, n2);
    return ans;
}
*/
  
  
  
  
  
 
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

//solution-3
//Two-pointer Algorithm (Iteratively)
***************************************

/*
#include<bits/stdc++.h>
using namespace std;

bool checksequenece(char arr1[], char arr2[])
{
   int n1 = strlen(arr1);
   int n2 = strlen(arr2);
   int i=0;
   int j=0;
   int count=0;
   while(i<n1)
   {
      if(arr1[i] == arr2[j])
      {
         i++;
         j++;
         count++;
      }
      else
      {
         i++;
      }
   }
   if(count==n2)
      return true;
   else
      return false;
}



int main()
{
   char large[10000];
	 char small[10000];
	 cin>>large;
	 cin>>small;
	 bool x=checksequenece(large , small);

	 if(x)
	    cout<<"true";
	 else
	    cout<<"false";
}
*/






***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************













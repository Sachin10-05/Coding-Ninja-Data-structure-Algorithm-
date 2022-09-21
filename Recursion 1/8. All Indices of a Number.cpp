/*
problems:
**********

Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. 
Save all the indexes in an array (in increasing order).

Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/





***************************************************************************************************************************************************************************

//solution-1
*************


#include<bits/stdc++.h>
using namespace std;

int allIndexes(int *arr, int n, int x, int *ans)
{
   static int index = 0;
   static int i=0;
   static int size = 0;
    
   //base case
   if(n==0)
      return size;
   if(arr[0] == x)
   {
      ans[index] = i;
      index++;
      size++;
   }
   i++;
   return allIndexes(arr+1, n-1, x, ans);
}


int main()
{
   int n;
   cin >> n;
  
   for(int i = 0; i < n; i++) 
   {
      cin >> input[i];
   }
    
   int x;
   cin >> x;
    
   int *output = new int[n];
   int size = allIndexes(input, n, x, output);
   cout << size << endl;
   for(int i = 0; i < size; i++) 
   {
      cout << output[i] << " ";
   }
   delete [] input;
   delete [] output;
}






***************************************************************************************************************************************************************************

//solution-2
*************

int allIndexes(int input[], int size, int x, int output[]) 
{
   if(size == 0)
      return 0;
   int smallCount= allIndexes(input, size -1, x, output);
   if(input[size -1] == x)
   {
      output[smallCount] = size - 1;
      return smallCount + 1;
   } 
   else 
   {
      return smallCount;
   }
}





***************************************************************************************************************************************************************************












































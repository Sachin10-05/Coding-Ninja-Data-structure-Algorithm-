/*
problem:
********

Given an integer array (of length n), find and return all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important.

Sample Input:
3
15 20 12

Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 
*/





******************************************************************************************************************************************************************************

* solution:
* (using 2D-Array as output)
******************************


#include<bits/stdc++.h>
using namespace std;
    
int subset(int arr[], int n, int output[][20]) 
{
    // Write your code here
    if(n<=0) 
    {
        output[0][0]=0;
        return 1;
    }

    int smallOutput = subset(arr+1,n-1,output);
    
    for(int i=0;i<smallOutput;i++) 
    {
        int col = output[i][0] + 1;
        output[i+smallOutput][0] = col;
        output[i+smallOutput][1] = arr[0];
        for(int j=2; j<col+1;j++)
        {
            output[i+smallOutput][j] = output[i][j-1];
        }
    }
    return 2*smallOutput;
}


int main() 
{
   int length;
   cin >> length;
    
   int input[20];
   for(int i=0; i < length; i++)
      cin >> input[i];
        
   int output[35000][20];
  
   int size = subset(input, length, output);

   //printing 2D-Array
   for( int i = 0; i < size; i++) 
   { 
	    for( int j = 1; j <= output[i][0]; j++) 
	    {
		     cout << output[i][j] << " ";
      }
      cout << endl;
   }
}







***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************


* solution
* (using vector as output)
****************************


vector<vector<int>> 



























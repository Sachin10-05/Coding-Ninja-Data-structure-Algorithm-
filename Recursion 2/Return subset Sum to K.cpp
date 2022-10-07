/*
problem:
********
Given an array A of size n and an integer K, return all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important.

Input format :
Line 1 : Integer n, Size of input array
Line 2 : Array elements separated by space
Line 3 : K 

Constraints :
1 <= n <= 20

Sample Input :
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output :
3 3
5 1
*/





****************************************************************************************************************************************************************************

//solution:
***********





void subsetSumToK_helper(int *arr,int n, int index, int output[][50], int &output_size, int target, int *ans, int count) {
    // base case
    if(index == n) {
        if(target == 0 and count != 0) {
            output[output_size][0] = count;
            for(int i = 0; i < count; i++){
                output[output_size][i + 1] = ans[i];
            }
            output_size++;
        }
        return;
    }
    
    //nth step
    //if the element is not taken
    subsetSumToK_helper(arr, n, index + 1, output, output_size, target, ans, count);
    
    //if nth element is included
    ans[count] = arr[index];
    subsetSumToK_helper(arr, n, index + 1, output, output_size, target - arr[index], ans, count + 1);
    
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
    int ans[n];
    int output_size = 0;
    int count = 0;
    int index = 0;
    
    subsetSumToK_helper(input, n, 0, output, output_size, k, ans, count);
    return output_size;
    
}







#include <iostream>
#include "solution.h"
using namespace std;

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
















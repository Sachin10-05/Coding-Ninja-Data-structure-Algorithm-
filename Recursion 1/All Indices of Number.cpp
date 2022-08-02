/*
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/










#include<bits/stdc++.h>
using namespace std;
int allIndexes(int *arr,int size,int x,int *output)
{
	//base case
	static int k=0;
	static int i=0;
	if(size==0)
		return -1;
	if(arr[0] == x)
	{
		output[k] = i; 
		k++;
		cout << i << " ";
	}
	i++;
	return allIndexes(arr+1,size-1,x,output);
}

int main()
{
    int n;
    cin >> n;
  
    int *input = new int[n];
    for(int i = 0; i < n; i++) 
	{
        cin >> input[i];
    }
    
    int x;
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    delete [] output;
}















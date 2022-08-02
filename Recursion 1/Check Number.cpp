/*
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true

Sample Input 2 :
3
9 8 10
2
Sample Output 2 :
false
*/
















#include<bits/stdc++.h>
using namespace std;
bool checkNumber(int arr[],int size,int x)
{
	//base class
	if(size==0)
		return false;
	if(arr[0] == x)
		return true;
	return checkNumber(arr+1,size-1,x);	
}

int main()
{
	int N;
	cin >> N;
	
	int *arr = new int[N];
	for(int i=0;i<N;i++)
	{
		cin >>arr[i];
	}
	
	int x;
	cin >> x;
	
	if(checkNumber(arr, N, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}











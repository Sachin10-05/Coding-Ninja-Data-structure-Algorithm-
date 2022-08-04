/*
Write a recursive function that returns the sum of the digits of a given integer.
Sample Input 1 :
12345
Sample Output 1 :
15

Sample Input 2 :
9
Sample Output 2 :
9
*/










#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int N)
{
	//base case
	if(N==0)
		return 0;
	return (N%10) + sumOfDigits(N/10);
}

int main()
{
	int N;
	cin >> N;
	
	cout << sumOfDigits(N);
	return 0;
}




/*
Check whether a given String S is a palindrome using recursion. Return true or false.
Sample Input 1 :
racecar
Sample Output 1:
true

Sample Input 2 :
ninja
Sample Output 2:
false
*/









#include<bits/stdc++.h>
using namespace std;
bool help(char arr[],int start,int end)
{
	//base case
	if(start==end)
		return true;
	if(arr[start] != arr[end])
		return false;
	return help(arr,start+1,end-1);
}

bool checkPalindrome(char arr[])
{
	static int start = 0;
	static int end = strlen(arr) - 1;
	
	return help(arr,start,end);
}

int main() 
{
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) 
	{
        cout << "true" << endl;
    }
    else 
	{
        cout << "false" << endl;
    }
}









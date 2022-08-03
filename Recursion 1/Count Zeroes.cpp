/*
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Sample Input 1 :
0
Sample Output 1 :
1

Sample Input 2 :
00010204
Sample Output 2 :
2

Sample Input 3 :
708000
Sample Output 3 :
4
*/













#include<bits/stdc++.h>
using namespace std;
int count(int x)
{
    if(x==0)
        return 0;
    if(x%10==0)
        return 1+count(x/10);
    else 
        return count(x/10);
}

int countZeros(int n) 
{
    // Write your code here
    if(n==0)
        return 1;
    else
        return count(n);
}

int main() 
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}














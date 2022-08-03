/*
Given k, find the geometric sum i.e.
	1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
Sample Input 1 :
3
Sample Output 1 :
1.87500

Sample Input 2 :
4
Sample Output 2 :
1.93750
*/








#include<bits/stdc++.h>
using namespace std;
double geometricSum(int k) 
{
	static int i=0;
    if(k==0)
        return 1;
    double ans = 1/pow(2,k);
    return ans + geometricSum(k-1);
}

int main() 
{
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}



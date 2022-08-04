/*
problem
-------
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, 
you need to convert the string into corresponding integer and return the answer.
Sample Input 1 :
00001231
Sample Output 1 :
1231

Sample Input 2 :
12567
Sample Output 2 :
12567
*/



//*********************************************************************************************************************************************************************

//                                                                      USING STRING
//                                                                      ************

#include<bits/stdc++.h>
using namespace std;
void stringToNumber_Actual(string str, int &ans) 
{
    // base case
    if(str.length() == 0)
        return;
    
    //small calculation
    ans = (ans * 10) + (str[0] - '0') ;
    
    //recursive call
    stringToNumber_Actual(str.substr(1), ans);
     
}


int stringToNumber(string str) 
{
    int answer = 0;
    
    stringToNumber_Actual(str, answer);
    return answer;
}

int main()
{
	string str;
	cin >> str;
	
	cout << stringToNumber(str) ;
}


//*******************************************************************************************************************************************************************


//                                                                      USING CHARACTER ARRAY
//                                                                      *********************

void stringToNumber_Actual(char temp[], int &n) 
{
    // base case
    if(*temp == '\0') 
    {
        return;
    }
    
    //small calculation
    n = (n * 10) + (*temp - '0') ;
    
    //recursive call
    stringToNumber_Actual(temp + 1, n);
     
}


int stringToNumber(char temp[]) 
{
    // Write your code here
    int answer = 0;
    
    stringToNumber_Actual(temp, answer);
    return answer;
}


























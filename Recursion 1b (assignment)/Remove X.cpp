/*
problem
-------
Given a string, compute recursively a new string where all 'x' chars have been removed.
Sample Input 1 :
xaxb
Sample Output 1:
ab

Sample Input 2 :
abc
Sample Output 2:
abc

Sample Input 3 :
xx
Sample Output 3:
*/


//*********************************************************************************************************************************************************************


//                                                                    USING STRING
//                                                                    ************

#include<bits/stdc++.h>
using namespace std;
string removeX(string str)
{
	//base case
	if(str.length() == 0)
		return " ";
	
	//recursive call
	if(str[0] == 'x')
		return removeX(str.substr(1));
	return str[0] + removeX(str.substr(1));
}

int main()
{
	string str;
	cin >> str;
	
	cout << removeX(str);
}



//********************************************************************************************************************************************************************


//                                                                    USING CHARACTER ARRAY
//                                                                    *********************

#include<bits/stdc++.h>
using namespace std;

void removeX_Actual(char temp[], char output[],int size,int count = 0) 
{
    //Base Case
    if(!size) 
    {
       return; 
    }
    
    // nth step
    if(*temp != 'x')
    {
        output[count++] = *temp;
    }
    
    // hypothesis step
    removeX_Actual(temp + 1, output, size - 1, count);
        
}

void removeX(char input[]) 
{
    // Write your code here
	  char output[1000] = " ";
    
    char *ptr = input;
    int size = 0;
    while(*ptr)
    {
        size++;
        ptr++;
    }
    
    removeX_Actual(input, output, size);
    for(int i = 0; input[i] != '\0'; i++) 
    {
        input[i] = '\0';
    }
    
    for(int i = 0; output[i] != '\0'; i++)
    {
    	input[i] = output[i];
    }
}


int main() 
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}





































/*
Problem
-------
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :
xpix
Sample Output :
x3.14x

Sample Input 2 :
pipi
Sample Output :
3.143.14

Sample Input 3 :
pip
Sample Output :
3.14p
*/




//**********************************************************************************************************************************************************************
//                                                                        USING STRING
//                                                                        ************



#include<bits/stdc++.h>
using namespace std;
string replacePi(string str)
{
	//base case
	if(str.length()==0 || str.length()==1)
		return str;
	
	//small calculation + recursive approach
	if(str[0] == 'p' && str[1]=='i')
		return "3.14" + replacePi(str.substr(2));
		
	return str[0] + replacePi(str.substr(1));
}

int main()
{
	string str;
	cin >> str;
	
	cout << replacePi(str);
    
}




//*******************************************************************************************************************************************************************


//                                                                        USING CHARACTER ARRAY
//                                                                        *********************

#include<bits/stdc++.h>
using namespace std;

void replacePiRec(char str[], int start)
{
    if (str[start] == '\0' || str[start + 1] == '\0') 
    {
        return;
    }
    
    replacePiRec(str, start + 1);
    
    if (str[start] == 'p' && str[start + 1] == 'i') 
    {
        for (int i = strlen(str); i >= start + 2; i--) 
        {
            str[i + 2] = str[i];
        }
 
        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}



void replacePi(char str[])
{
    int start = 0;
    replacePiRec(str, start);
}
 

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

















































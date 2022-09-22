/*
problems:
**********

Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. 
The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). 
The rules are :
        1) Only one disk can be moved at a time. ✔
        2) A disk can be moved only if it is on the top of a rod. ✔
        3) No disk can be placed on the top of a smaller disk. ✔
        
Print the steps required to move n disks from source rod to destination rod.
Source Rod is named as 'a', auxiliary rod as 'b' and destination rod as 'c'.

Sample Input 1 :
2
Sample Output 1 :
a b
a c
b c

Sample Input 2 :
3
Sample Output 2 :
a c
a b
c b
a c
b a
b c
a c
*/





***************************************************************************************************************************************************************************

//Tower of Hanoi:
******************

* Time Complexity = O(2^N)
* Space Complexity = O(N), Function call stack space

* step-1: Transfer (n-1) disks from source to helper/auxilary. So destination will become helper.
* step-2: Transfer 1 (i.e, last) disk from source to destination. So print source and destination directly.
* step-3: Transfer (n-1) disks from helper/auxilary to destination with the help of source as helper.
  
  
  
  
  
***************************************************************************************************************************************************************************

//solution:
************

#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination)
{
   //base case
   if(n==1)
   {
      cout << source << " " << destination << endl;
      return;
   }
    
   if(n==0)
      return;
    
   towerOfHanoi(n-1, source, destination, helper);
   cout << source << " " << destination << endl;
   towerOfHanoi(n-1, helper, source, destination);
}


int main() 
{
   int n;
   cin >> n;
   towerOfHanoi(n, 'a', 'b', 'c');
}





***************************************************************************************************************************************************************************






























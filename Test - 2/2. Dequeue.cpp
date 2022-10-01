/*
problem:
********
You need to implement a class for Dequeue i.e. for double ended queue. In this queue, elements can be inserted and deleted from both the ends.
Sample Input 1:
5 1 49 1 64 2 99 5 6 -1
Sample Output 1:
-1
64
99
*/





********************************************************************************************************************************************************************************
********************************************************************************************************************************************************************************

//solution:
***********



#include<iostream>
using namespace std;














int main()
{
   Deque dq(10);
   int choice,input;
   while(true) 
   {
      cin >> choice;
      switch (choice) 
      {
         case 1:
            cin >> input;
            dq.insertFront(input);
            break;
         case 2:
            cin >> input;
            dq.insertRear(input);
            break;
         case 3:
            dq.deleteFront();
            break;
         case 4:
            dq.deleteRear();
            break;
         case 5:
            cout << dq.getFront() << "\n";
            break;
         case 6:
            cout << dq.getRear() << "\n";
            break;
         default:
            return 0;
       }
   }
   return 0;
}






********************************************************************************************************************************************************************************
********************************************************************************************************************************************************************************



















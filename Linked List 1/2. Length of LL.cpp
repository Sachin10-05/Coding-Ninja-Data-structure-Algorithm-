/*
problem:
********
For a given singly linked list of integers, find and return its length. Do it using an iterative method.

Constraints :
    1 <= t <= 10^2
    0 <= N <= 10^5
    Time Limit: 1 sec
    
Sample Input 1 :
1
3 4 5 2 6 1 9 -1
Sample Output 1 :
7

Sample Input 2 :
2
10 76 39 -3 2 9 -23 9 -1
-1
Sample Output 2 :
8
0
*/





***************************************************************************************************************************************************************************

//solution
***********

#include <bits/stdc++.h>
using namespace std;

class Node
{
   public:
	    int data;
	    Node *next;
	    Node(int data)
	    {
		     this->data = data;
		     this->next = NULL;
	    }
};



int length(Node *head)
{
   //Write your code here
   Node *temp = head;
   int count=0;
   while(temp != NULL)
   {
      count++;
      temp=temp->next;
   }
   return count;
}



Node *takeinput()
{
   int data;
	 cin >> data;
	 Node *head = NULL;
   Node *tail = NULL;
	 while (data != -1)
	 {
	    Node *newNode = new Node(data);
		  if (head == NULL)
		  {
			   head = newNode;
			   tail = newNode;
		  }
		  else
		  {
			   tail->next = newNode;
			   tail = newNode;
		  }
		  cin >> data;
   }
	 return head;
}



int main()
{
   int t;
	 cin >> t;
	 while (t--)
	 {
	    Node *head = takeinput();
		  cout << length(head) << endl;
	 }
	 return 0;
}






***************************************************************************************************************************************************************************




























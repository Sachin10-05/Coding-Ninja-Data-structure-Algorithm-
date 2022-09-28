/*
problem:
*********

Given a singly linked list of integers, reverse the nodes of the linked list 'k' at a time and return its modified list.
'k' is a positive integer and is less than or equal to the length of the linked list. 
If the number of nodes is not a multiple of 'k,' then left-out nodes, in the end, should be reversed as well.

Sample Input 1 :
1
1 2 3 4 5 6 7 8 9 10 -1
4
Sample Output 1 :
4 3 2 1 8 7 6 5 10 9

Sample Input 2 :
2
1 2 3 4 5 -1
0
10 20 30 40 -1
4
Sample Output 2 :
1 2 3 4 5 
40 30 20 10 
*/





***************************************************************************************************************************************************************************

//solution:
************

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





Node *kReverse(Node *head, int k)
{
   //Write your code here
   if (head == NULL or k == 0) 
   {
      return head;
   }
   Node *curr = head;
   Node *nextNode = NULL;
   Node *prev = NULL;
   int count = 0;
   while(curr!=NULL && count < k) 
   {
      nextNode = curr -> next;
      curr -> next = prev;
      prev = curr;
      curr = nextNode;
      count++;
   }
   if(nextNode!=NULL) 
   {
      head -> next = kReverse(nextNode, k);
   }
   return prev;
}





Node *takeinput()
{
   int data;
	 cin >> data;
	 Node *head = NULL, *tail = NULL;
	 while (data != -1)
	 {
	    Node *newnode = new Node(data);
		  if (head == NULL)
		  {
			   head = newnode;
			   tail = newnode;
		  }
		  else
		  {
			   tail->next = newnode;
			   tail = newnode;
		  }
		  cin >> data;
	 }
	 return head;
}


void print(Node *head)
{
   Node *temp = head;
	 while (temp != NULL)
	 {
	    cout << temp->data << " ";
		  temp = temp->next;
	 }
	 cout << endl;
}



int main()
{
   int t;
	 cin >> t;
   while (t--)
	 {
	    Node *head = takeinput();
		  int k;
		  cin >> k;
		  head = kReverse(head, k);
		  print(head);
	 }
	 return 0;
}








***************************************************************************************************************************************************************************








































/*
problem:
*********
You have been given a singly linked list of integers. Write a function to print the list in a reverse order.
To explain it further, you need to start printing the data from the tail and move towards the head of the list, printing the head data at the end.

Sample Input 1 :
1
1 2 3 4 5 -1

Sample Output 1 :
5 4 3 2 1
*/





****************************************************************************************************************************************************************************

//solution-1 (Recursive)
**************************


Node *helper(Node *head, Node *curr, Node *prev, Node *forward)
{
   //base case
   if(curr == NULL)
   {
      return prev;
   }
   head = helper(head, forward, curr, curr->next);
   curr->next = prev;
   return head;
}


void printReverse(Node *head)
{
   if(head == NULL)
      return;
    
   Node *prev = NULL;
   Node *curr = head;
   Node *forward = curr->next;
   head = helper(head, curr, prev, forward);
   while(head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
}









***************************************************************************************************************************************************************************

//solution-2
*************

//RECURSIVE
/*
void printReverse(Node *head)
{
   //Write your code here
   if(head==NULL)
      return;
   printReverse(head->next);
   cout<<head->data<<" ";
}
*/






****************************************************************************************************************************************************************************

//solution-3 (recursively)
****************************

Node *helper(Node *head)
{
   //base case
   if(head==NULL || head->next==NULL)
   {
      return head;
   }
    
   Node *newHead = helper(head->next);
   head->next->next = head;
   head->next = NULL;
   return newHead;
}


void printReverse(Node *head)
{
   head = helper(head);
   //print
   while(head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
}




****************************************************************************************************************************************************************************

//solution-3 (ITEARTIVE)
**************************

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



void printReverse(Node *head)
{
    //Empty LL
    if(head == NULL)
    	return;
        
    Node *prev = NULL;
    Node *curr = head;
    while(curr != NULL)
    {
        Node *forward = curr->next;;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    
    Node *temp = prev;  //New Head = prev
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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



int main()
{
   int t;
	 cin >> t;
	 while (t--)
	 {
	    Node *head = takeinput();
		  printReverse(head);
		  cout << endl;
	 }
	 return 0;
}









***************************************************************************************************************************************************************************









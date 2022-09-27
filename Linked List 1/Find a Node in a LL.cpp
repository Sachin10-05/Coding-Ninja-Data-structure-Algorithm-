/*
problem:
*********
You have been given a singly linked list of integers. Write a function that returns the index/position of integer data denoted by 'N' (if it exists). 
Return -1 otherwise.

Note :
Assume that the Indexing for the singly linked list always starts from 0.

Sample Input 1 :
2
3 4 5 2 6 1 9 -1
5
10 20 30 40 50 60 70 -1
6

Sample Output 1 :
2
-1
*/





***************************************************************************************************************************************************************************

//solution-1:
*************


//RECURSIVE
int findNode(Node *head, int val)
{
   static int i=0;
    
   //base case
   if(head == NULL)
      return -1;
   if(head->data == val)
      return i;
   i++;
   return findNode(head->next, val);
}











***************************************************************************************************************************************************************************



#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
	 int data;
	 Node *next;
	 Node(int data)
	 {
	    this -> data = data;
			this -> next = NULL;
	 }
};


void print(Node *head)
{
   Node *temp = head;
	 while(head != NULL)
	 {
	    cout << temp -> data << " ";
		  temp = temp->next;
	 }
	 cout << endl;
}


Node *takeinput()
{
   int data;
	 cin >> data;
	
	 Node *head = NULL;
	 Node *tail = NULL;
	 while(data != -1)
	 {
	    Node *n = new Node(data);
		  if(head == NULL)
		  {
			   head = n;
			   tail = n;
		  }
		  else
		  {
			   tail->next = n;
			   tail = n;
		  }
		  cin >> data;
	 }
	 return head;
}



//ITERATIVE
int findNode(Node *head,int val)
{
   int index=0;
	 Node *temp = head;
	 while(temp != NULL)
	 {
	    if(temp -> data == val)
			return index;
		  index++;
		  temp = temp -> next;
	 }
	 return -1;
}




int main()
{
   int t;
	 cin >> t;
	 while(t--)
	 {
	    Node *head = takeinput();
	    int val;
		  cin >> val;
		  cout << findNode(head,val) << endl;
	 }
}





***************************************************************************************************************************************************************************




























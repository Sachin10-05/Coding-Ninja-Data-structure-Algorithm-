/*
problem:
*********
You have been given a singly linked list of integers where the elements are sorted in ascending order.
Write a function that removes the consecutive duplicate values such that the given list only contains unique elements and returns the head to the updated list.

Sample Input 1 :
1
1 2 3 3 3 3 4 4 4 5 5 7 -1
Sample Output 1 :
1 2 3 4 5 7 

Sample Input 2 :
2
10 20 30 40 50 -1
10 10 10 10 -1
Sample Output 2 :
10 20 30 40 50
10
*/





***************************************************************************************************************************************************************************

* solution
* Iterative Approach
***********************


#include<bits/stdc++.h>
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



//ITERATIVE
Node *removeDuplicates(Node *head)
{
   Node *curr = head;
   while(curr != NULL && curr->next!=NULL)
   {
      if(curr->data != curr->next->data)
         curr = curr->next;
      else
      {
         curr->next = curr->next->next;
         curr->next->next = NULL;
      }
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
		  head = removeDuplicates(head);
		  print(head);
	 }
	 return 0;
}





***************************************************************************************************************************************************************************




















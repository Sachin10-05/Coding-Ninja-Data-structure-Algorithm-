/*
You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'POS'.
Note :
    Assume that the Indexing for the linked list always starts from 0.
    If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.
    
Remember/Consider :
    While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
    
Constraints :
    1 <= T <= 10^2
    0 <= N <= 10^5
    POS >= 0
    Time Limit: 1sec
    
Sample Input 1 :
1 
3 4 5 2 6 1 9 -1
3

Sample Output 1 :
3 4 5 6 1 9
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




int length(Node *head)
{
   Node *temp = head;
   int count = 0;
   while(temp != NULL)
   {
      count++;
      temp = temp->next;
   }
   return count;
}


Node *deleteNode(Node *head, int pos)
{
   int size = length(head);
   
   Node *curr = head;
   Node *prev = NULL;
    
   //Edge Case:
   if(pos<0 || pos >= size)
      return head;
    
   //First Node
   else if(pos == 0)
   {
      head = curr->next;
		  delete curr;
		  return head;
   }
    
   //Ith Node + Last Node
   else
   {
      int count = 0;
      while(count < pos)
      {
         count++;
         prev = curr;
         curr = curr->next;
      }
      prev->next = curr->next;
      delete curr;
      return head;
   }
}





Node *takeinput()
{
   int data;
	 cin >> data;
	 Node *head = NULL, *tail = NULL;
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
		  int pos;
		  cin >> pos;
		  head = deleteNode(head, pos);
		  print(head);
	 }
   return 0;
}







***************************************************************************************************************************************************************************


















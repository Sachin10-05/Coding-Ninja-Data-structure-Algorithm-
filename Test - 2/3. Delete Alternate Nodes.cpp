/*
problem:
********
Given a Singly Linked List of integers, delete all the alternate nodes in the list.
Sample Input 1:
1 2 3 4 5 -1
Sample Output 1:
1 3 5

Sample Input 2:
10 20 30 40 50 60 70 -1
Sample Output 2:
10 30 50 70 
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
***********














*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************



main-code:
---------
  
#include <iostream>
using namespace std;


class Node 
{
   public:
   int data;
   Node * next;
   Node(int data)
   {
      this -> data = data;
      this -> next = NULL;
   }
    
   ~Node() 
   {
      if(next) 
      {
         delete next;
      }
   }
};


Node* takeinput() 
{
   int data;
   cin >> data;
   Node *head = NULL, *tail = NULL;
   while(data != -1)
   {
      Node *newNode = new Node(data);
      if(head == NULL) 
      {
         head = newNode;
         tail = newNode;
      }
      else
      {
         tail -> next = newNode;
         tail = newNode;
      }
      cin >> data;
   }
   return head;
}


void print(Node *head) 
{
   Node *temp = head;
   while(temp != NULL) 
   {
      cout << temp -> data << " ";
      temp = temp -> next;
   }
   cout << endl;
}


int main() 
{
   Node *head = takeinput();
   deleteAlternateNodes(head);
   print(head);
   delete head;
   return 0;
}




*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************










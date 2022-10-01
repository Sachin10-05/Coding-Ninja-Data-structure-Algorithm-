//solution:
************


#include<bits/stdc++.h>
using namespace std;

class Node 
{
   public :
   int data;
   Node *next;
   Node(int data) 
   {
      this->data = data;
      next = NULL;
   }
};



class Queue
{
   private:
   Node *head;
   Node *tail;
   int size;
		
   public:
   //Default constructor
   Queue()
   {
      head = NULL;
      tail = NULL;
      size = 0;
   }
		
   int getSize()
   {
      return size;
   }
		
   bool isEmpty()
   {
      if(size == 0)
         return true;
      return false;
   }
		
   void enqueue(int element)
   {
      Node *n = new Node(element);
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
      size++;
   }
		
   int dequeue()
   {
      if(head == NULL)
         return -1;
      int ans = head->data;
      Node *temp = head;
      head = head->next;	
      size--;
      delete temp;
      return ans;
   }
		
   int front()
   {
      if(head == NULL)
         return -1;
      return head->data;
   }
};






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************












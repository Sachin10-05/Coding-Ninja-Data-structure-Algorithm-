/*
problem:
********
Given a singly linked list of integers, sort it using 'Bubble Sort.'

Constraints :
    0 <= M <= 10^3
    Where M is the size of the singly linked list.
    Time Limit: 1sec
  
Sample Input 1 :
10 9 8 7 6 5 4 3 -1
Sample Output 1 :
3 4 5 6 7 8 9 10 
 
Sample Input 2 :
10 -5 9 90 5 67 1 89 -1
Sample Output 2 :
-5 1 5 9 10 67 89 90 
*/







*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************

//solution:
***********

// Time Complexity : O(n^2)
// Auxillary Space : O(1)


int length(Node *head)
{
   Node *temp = head;
   int count=0;
   while(temp != NULL)
   {
      count++;
      temp = temp->next;
   }
   return count;
}


Node *bubbleSort(Node *head)
{
   //Edge Case:
   if(head == NULL)
      return head;
    
   if(head->next == NULL)
      return head;
    
   int len = length(head);  //length of LL
   for(int i=0;i<len;i++)
   {
      Node *curr = head;
      Node *prev = NULL;
      while(curr->next != NULL)
      {
         if((curr->data) > (curr->next->data))
         {
            //swap both Nodes
            if(prev!=NULL)
            {
               Node *temp = curr->next->next;
               curr->next->next=curr;
               prev->next = curr->next;
               curr->next = temp;
               prev = prev->next;
            }
            else
            {
               head = curr->next;
               curr->next = head->next;
               head->next = curr;
               prev = head;
            }
         }
         else
         {
            //No swapppping
            prev = curr;
            curr = curr->next;
         }
      }
   }
   return head;
}





*******************************************************************************************************************************************************************************

//main-code:
-------------

/*
#include <iostream>
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


int main()
{
   Node *head = takeinput();
   head = bubbleSort(head);
   print(head);
}
*/






*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************
*******************************************************************************************************************************************************************************










































































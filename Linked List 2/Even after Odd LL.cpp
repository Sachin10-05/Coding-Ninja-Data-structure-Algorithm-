/*
problem:
*********
For a given singly linked list of integers, arrange the elements such that all the even numbers are placed after the odd numbers. 
The relative order of the odd and even terms should remain unchanged.
Sample Input 1 :
1
1 4 5 2 -1
Sample Output 1 :
1 5 4 2 
Sample Input 2 :
2
1 11 3 6 8 0 9 -1
10 20 30 40 -1
Sample Output 2 :
1 11 3 9 6 8 0
10 20 30 40
*/






***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

//solution-1
*************

Approach:  step1----> create one new LL that contains even numbers.
           step2----> create another new LL that contains odd numbers.
           step3----> Merge both LL.
         
 
Node *evenAfterOdd(Node *head)
{
   Node *evenHead = new Node(-1);
   Node *evenTail = evenHead;
   Node *oddHead = new Node(-1);
   Node *oddTail = oddHead;
    
   Node *curr = head;
   while(curr != NULL)
   {
      if(curr->data % 2 == 0)
      {
         evenTail->next = curr;
         evenTail = curr;
      }
      else
      {
         oddTail->next = curr;
         oddTail = curr;
      }
      curr = curr->next;
   }
    
    
   //Merge two LL
   oddTail->next = evenHead->next;
   evenTail->next = NULL;
    
   //since our head contains -1 as first node so delete that
   head = oddHead->next;
   delete oddHead;
   return head;
}






***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

solution-2:
************

/*
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


//same as above approach:
Node *evenAfterOdd(Node *head)
{
   //write your code here
   if(!head or !(head -> next)) 
   {
      return head;
   }
    
   Node *curr = head;
   Node *odd_Head = NULL;
   Node *odd_Tail = NULL;
   Node *even_Head = NULL;
   Node *even_Tail = NULL;
    
   while(curr) 
   {
      if(curr -> data & 1) 
      {
         if(odd_Head == NULL) 
         {
            odd_Head = curr;
            odd_Tail = curr;
          }
          else 
          {
             odd_Tail -> next = curr;
             odd_Tail = curr;
          }
       } 
       else 
       {
          if(even_Head == NULL) 
          {
             even_Head = curr;
             even_Tail = curr;
          } 
          else 
          {
             even_Tail -> next = curr;
             even_Tail = curr;
          }
       }
       curr = curr -> next;
    }
    
    
    if(odd_Head == NULL) 
    {
       return even_Head;
    } 
    else 
    {
       if(even_Head == NULL) 
       {
          return odd_Head;
       } 
       else 
       {
          odd_Tail -> next = even_Head;
          even_Tail -> next = NULL;
          return odd_Head;
       }
    }
}


int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      Node *head = takeinput();
      head = evenAfterOdd(head);
      print(head);
   }
   return 0;
}
*/
	
  





**************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************










/*
problem:
*********
You have been given a singly linked list of integers along with an integer 'N'. 
Write a function to append the last 'N' nodes towards the front of the singly linked list and returns the new head to the list.

Sample Input 1 :
2
1 2 3 4 5 -1
3
10 20 30 40 50 60 -1
5

Sample Output 1 :
3 4 5 1 2
20 30 40 50 60 10
*/





***************************************************************************************************************************************************************************

* solution-1
* Recursive-Approach
**********************






***************************************************************************************************************************************************************************

* solution-2 
* Iterative-Approach
**********************


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
Node *appendLastNToFirst(Node *head, int n)
{
   //Edge case
   if(n==0)
      return head;
    
   else if(head == NULL)
      return head;
        
   //find tail
   Node *tail = head;
   int count=0;
   while(tail->next != NULL)
   {
      count++;
      tail = tail->next;
   }
    
   int k = count-n;
   int i=0;
   Node *curr = head;
   while(i<k)
   {
      curr = curr->next;
      i++;
   }
   Node *temp = curr->next;
   curr->next = NULL;
   tail->next = head;
   head = temp;
   return head;
}



int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      Node *head = takeinput();
      int n;
      cin >> n;
      head = appendLastNToFirst(head, n);
      print(head);
   }
   return 0;
}







***************************************************************************************************************************************************************************





























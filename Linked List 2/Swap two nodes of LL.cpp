/*
problem:
*********
You have been given a singly linked list of integers along with two integers, 'i,' and 'j.' Swap the nodes that are present at the 'i-th' and 'j-th' positions.

Constraints :
    1 <= t <= 10^2
    0 <= M <= 10^5
    Where M is the size of the singly linked list.
    0 <= i < M
    0 <= j < M
    Time Limit: 1sec
    
Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3 4
Sample Output 1 :
3 4 5 6 2 1 9 

 Sample Input 2 :
2
10 20 30 40 -1
1 2
70 80 90 25 65 85 90 -1
0 6
 Sample Output 2 :
10 30 20 40 
90 80 90 25 65 85 70 
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
*************

// T.C = O(N)
// S.C = O(1)




Node *swapNodes(Node *head, int i, int j)
{
   //Edge Case:
   if(i==j)
      return head;
    
   //step-1:
   //Traverse to find Node at i
   Node *prev1 = NULL;
   Node *curr1 = head;
   int count1 = 0;
   while(curr1!=NULL && count1<i)
   {
      count1++;
      prev1 = curr1;
      curr1 = curr1->next;
   }
    
   //step-2:
   //Traverse to find Node at j
   Node *prev2 = NULL;
   Node *curr2 = head;
   int count2 =  0;
   while(curr2!=NULL && count2<j)
   {
      count2++;
      prev2 = curr2;
      curr2 = curr2->next;
   }
    
    
   if(prev1!=NULL) 
   {
      prev1 -> next = curr2;
   } 
   else 
   {
      head = curr2;
   }
    
   if(prev2!=NULL) 
   {
      prev2 -> next = curr1;
   } 
   else 
   {
      head = curr1;
   }
    
   //swapping Node curr1 and curr2
   Node *temp = curr2 -> next;
   curr2 -> next = curr1 -> next;
   curr1 -> next = temp;
    
   return head;
}





****************************************************************************************************************************************************************************

main-code:
----------
  
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
   int t;
   cin >> t;
   while (t--)
   {
      int i, j;
      Node *head = takeinput();
      cin >> i;
      cin >> j;
      head = swapNodes(head, i, j);
      print(head);
   }
   return 0;
}
*/







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************




















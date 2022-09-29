/*
problem:
*********
You have been given a singly linked list of integers along with two integers, 'M,' and 'N.' Traverse the linked list such that you retain the 'M' nodes, 
then delete the next 'N' nodes. Continue the same until the end of the linked list.
To put it in other words, in the given linked list, you need to delete N nodes after every M nodes.

Constraints :
    1 <= t <= 10^2
    0 <= P <= 10^5
    Where P is the size of the singly linked list.
    0 <= M <= 10^5
    0 <= N <= 10^5 
    Time Limit: 1sec
    
Sample Input 1 :
1
1 2 3 4 5 6 7 8 -1
2 2
Sample Output 1 :
1 2 5 6

Sample Input 2 :
2
10 20 30 40 50 60 -1
0 1
1 2 3 4 5 6 7 8 -1
2 3
Sample Output 2 :
1 2 6 7
*/





***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

//solution:
************

Node *skipMdeleteN(Node *head, int m, int n)
{
   //Edge case:
   if(m==0)
      return NULL;
    
   if(n==0)
      return head;
    
   Node *temp = head;
   Node *curr = NULL;
    
   while(temp!=NULL)
   {
      int count1 = 0;
      while(temp!=NULL && count1<m)
      {
         curr= temp;
         temp = temp->next;
         count1++;
      }
      Node *a = curr;
        
      int count2 = 0;
      while(temp!=NULL && count2<n)
      {
         curr = temp;
         temp = temp->next;
         count2++;
      }
      Node *b = curr;
      a->next = b->next;
      curr = NULL;
   }
   return head;
}






***************************************************************************************************************************************************************************

//main-code:


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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}







***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
















// MERGE SORT IN LL
*********************

/*
problem:
--------
Given a singly linked list of integers, sort it using 'Merge Sort.'
Sample Input 1 :
1
10 9 8 7 6 5 4 3 -1
Sample Output 1 :
 3 4 5 6 7 8 9 10 
 
 Sample Output 2 :
2
-1
10 -5 9 90 5 67 1 89 -1
Sample Output 2 :
-5 1 5 9 10 67 89 90 
*/
  
  
  
  
  
***************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
*************************************************************************************************************************************************************************

//solution:
************


//Algo:
/*
   i) Find mid Node
  ii) Break LL into two Linked Lists
 iii) recursively sort(LL1) and sort(LL2)
  iv) Merge left LL and right LL
   v) return head of merge LL
*/

//T.C = O(Nlog(N))
//S.C = O(log(N))




Node *merge(Node *left, Node *right)
{
   //base case
   if(left == NULL)
      return right;
	
   if(right == NULL)
      return left;
    
   //Merge two sorted LL
   Node *ans = new Node(-1);
   Node *temp = ans;
   while(left!=NULL && right!=NULL)
   {
      if(left->data < right->data)
      {
         temp->next = left;
         temp = left;
         left = left->next;
      }
      else
      {
         temp->next = right;
         temp = right;
         right = right->next;
      }
   }
   while(left!=NULL)
   {
      temp->next = left;
      temp = left;
      left = left->next;   
   }
   while(right!=NULL)
   {
      temp->next = right;
      temp = right;
      right = right->next;
   }
   return ans->next;
}



Node *findMid(Node *head)
{
   Node *slow = head;
   Node *fast = head->next;
   while(fast!=NULL && fast->next!=NULL)
   {
      slow = slow->next;
      fast = fast->next->next;
   }
   return slow;
}



Node *mergeSort(Node *head)
{
   //base case
   if(head==NULL)
      return head;
    
   if(head->next == NULL)
      return head;
    
   //Break LL into two halves
   Node *mid = findMid(head);  //step1 - find mid Node
   Node *left = head;          //step2 - create LL1 with had as main head
   Node *right = mid->next;    //step3 - create LL2 with head as mid->next
   mid->next = NULL;           //step4 - make tail of LL1 to NULL
    
    
   //Sort both halves individually
   left = mergeSort(left);
   right = mergeSort(right);
    
    
   //merge both left and rigth LL
   Node *res = merge(left,right);
   return res;    
}






*************************************************************************************************************************************************************************

main function:
-------------

/*
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


int main()
{
   int t;
	 cin >> t;
   while (t--)
	 { 
	    Node *head = takeinput();
		  head = mergeSort(head);
		  print(head);
	 }
   return 0;
}
*/
  





***************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
*************************************************************************************************************************************************************************





















































  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

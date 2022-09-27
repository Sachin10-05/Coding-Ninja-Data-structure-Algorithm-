/*
problem:
*********
You have been given a head to a singly linked list of integers. Write a function check to whether the list given is a 'Palindrome' or not.

Sample Input 1 :
1
9 2 3 3 2 9 -1
Sample Output 1 :
true

Sample Input 2 :
2
0 2 3 2 5 -1
-1
Sample Output 2 :
false
true
*/






***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************


* solution-1
* T.C = O(N)
* S.C = O(N), where N = total no of nodes in LL
***************************************************



//Algo-
   * step-1: create array
   * step-2: Copy LL element to array
   * step-3: check palindrome in array
   
   
   
#include<bits/stdc++.h>
bool isPalindrome(Node *head)
{
   vector<int> arr;
   Node *temp = head;
   while(temp != NULL)
   {
      arr.push_back(temp->data);
      temp = temp->next;
   }
    
   int i=0;
   int j=arr.size()-1;
   while(i<j)
   {
      if(arr[i] != arr[j])
         return false;
      i++;
      j--;
   }
   return true;
}







***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************


* solution-2 ✔
* T.C = O(N)
* S.C = O(1)
******************


//Algo-
   * Algo-
   * step-1: find middle of LL
   * step-2: reverse from middle to tail
   * step-3: compare left part of middle with right part.


     

Node *getMid(Node *head)
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


Node *reverse(Node *head)
{
   Node *curr = head;
   Node *prev = NULL;
   Node *nextNode = NULL;
    
   while(curr != NULL)
   {
       nextNode = curr->next;
       curr->next = prev;
       prev = curr;
       curr = nextNode;
   }
   return prev;
}


bool isPalindrome(Node *head)
{
   //Edge case
   if(head==NULL || head->next == NULL)
      return true;
    
   //step-1---->find middle
   Node *middle = getMid(head);
    
   //step-2---->reverse list after middle
   Node *temp = middle->next;
   middle->next = reverse(temp);
    
   //step-3---->compare both halves
   Node *head1 = head;
   Node *head2 = middle->next;
   while(head2 != NULL)
   {
      if(head1->data != head2->data)
         return false;
      head1 = head1->next;
      head2 = head2->next;
   }
    
   //step-4-->repeat step-2 (just to make LL same as original LL)
   temp = middle->next;
   middle = reverse(temp);
   return true;
}


     
     
     
     
***************************************************************************************************************************************************************************


     
     
     
     
     
     
     
     
     
     
     
     
     



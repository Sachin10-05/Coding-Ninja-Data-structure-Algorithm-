/*
problem:
*********
You have been given two sorted(in ascending order) singly linked lists of integers.
Write a function to merge them in such a way that the resulting singly linked list is also sorted(in ascending order) and return the new head to the list.

Sample Input 1 :
1
2 5 8 12 -1
3 6 9 -1
Sample Output 1 :
2 3 5 6 8 9 12 
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-1
*************

* Algo: step1 - Crete new LL with new head and new tail pointing at same node
        step2 - Traverse LL1 and LL2 and compare node one by one 
        step3 - Add node with smaller data to new LL
        step4 - Return newHead
        
//T.C = O(M+N)
//S.C = O(M+N)
        
        
        
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Edge case:
    if(head1 == NULL)
        return head2;
    
    else if(head2 == NULL)
        return head1;
    
    //create new LL
    Node *newHead = new Node(-1);
    Node *newTail = newHead;
    
    Node *temp1 = head1;
    Node *temp2 = head2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data < temp2->data)
        {
            newTail->next = temp1;
            temp1=temp1->next;
            newTail = newTail->next;
            newTail->next = NULL;
        }
        else
        {
            newTail->next = temp2;
            temp2 = temp2->next;
            newTail = newTail->next;
            newTail->next = NULL;
        }
    }
    while(temp1!=NULL)
    {
        newTail->next = temp1;
        temp1=temp1->next;
        newTail = newTail->next;
        newTail->next = NULL;
    }
    while(temp2!=NULL)
    {
        newTail->next = temp2;
        temp2 = temp2->next;
        newTail = newTail->next;
        newTail->next = NULL;
    }
    return newHead->next;
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-2
*************

** Algo: i)  step1 - Edge case: if head1 is empty return head2 and vice-versa.
        ii)  step2 - we need to add all node in head1 only to avoid extra space.
        iii) step3 - Compare both LL and add to first LL
        iv)  step4:
                * if curr2->data lies between curr1->data and next1->data , Then add it.
                * else move curr1 and next1 to forward
                * Also check if next1==NULL then add all curr to curr1->next

// T.C = O(M+N)
// S.C = O(1)




Node *helper(Node *head1, Node *head2)
{
   //if only one node is present in LL1
   if(head1->next == NULL)
   {
      head1->next = head2;
      return head1;
   }
			
   Node *curr1 = head1;
   Node *next1 = curr1->next;
    
   Node *curr2 = head2;
   Node *next2 = curr2->next;
    
   while(curr1!=NULL && next1!=NULL && curr2!=NULL)
   {
      if((curr2->data >= curr1->data)  &&  (curr2->data <= next1->data))
      {
         curr1->next = curr2;
         next2 = curr2->next;
         curr2->next = next1;
         curr1 = curr2;
         curr2 = next2;
      }
      else
      {
         curr1 = next1;
         next1 = next1->next;
         if(next1 == NULL)
         {
            curr1->next = curr2;
            return head1;
         }
      }
   }
   return head1;
}




Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
   if(head1 == NULL)
      return head2;
	
   else if(head2 == NULL)	
      return head1;
    
   else
   {
      if(head1->data > head2->data)
         return helper(head2, head1);
      else
         return helper(head1, head2);
   }
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************







/*
problem:
*********
For a given singly linked list of integers, find and return the node present at the middle of the list.

Sample Input 1 :
1
1 2 3 4 5 -1
Sample Output 1 :
3
Sample Input 2 :
2 
-1
1 2 3 4 -1
Sample Output 2 :
2
*/





******************************************************************************************************************************************************************************

//solution:
*************


//Optimized soln
Node *midPoint(Node *head)
{
   //Empty LL
   if(head == NULL)
      return head;
    
   //contains only 1 Node
   else if(head->next == NULL)
      return head;
    
   else
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
}






***************************************************************************************************************************************************************************






















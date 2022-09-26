/*
problem:
*********
Given a singly linked list of integers and position 'i', delete the node present at the 'i-th' position in the linked list recursively.

Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3

Sample Output 1 :
3 4 5 6 1 9
*/






***************************************************************************************************************************************************************************

//solution:
************


Node *deleteNodeRec(Node *head,int pos)
{
   //base case
   if(head == NULL)
      return head;
    
   //small calculation
   if(pos == 0)
   {
      head = head -> next;
      return head;
   }
   head -> next = deleteNodeRec(head->next,pos-1);
   return head;
}






***************************************************************************************************************************************************************************



























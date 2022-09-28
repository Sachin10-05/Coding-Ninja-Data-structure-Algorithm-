//solution:
************


//Head recursion-----> First function call and then small calculation is done.

Node *reverse(Node *head, Node *curr, Node *prev, Node *nextNode)
{
   //base case
   if(curr == NULL)
   {
      return prev;
   }
   head = reverse(head, nextNode, curr, curr->next);
   curr->next = prev;
   return head;
}


Node *reverseLinkedListRec(Node *head)
{
   if(head == NULL)
      return head;
    
   Node *curr = head;
   Node *prev = NULL;
   Node *nextNode = curr->next;
   return reverse(head, curr, prev, nextNode);
}








***************************************************************************************************************************************************************************

































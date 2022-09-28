//solution:
************


Node *reverseLinkedList(Node *head)
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






***************************************************************************************************************************************************************************






























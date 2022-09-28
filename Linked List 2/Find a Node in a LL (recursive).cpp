//solution:
***********


//RECURSIVE
int findNode(Node *head, int val)
{
   static int i=0;
    
   //base case
   if(head == NULL)
      return -1;
   if(head->data == val)
      return i;
   i++;
   return findNode(head->next, val);
}






***************************************************************************************************************************************************************************



















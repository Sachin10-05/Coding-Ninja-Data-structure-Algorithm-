/*
problem
********
You have been given a linked list of integers. Your task is to write a function that inserts a node at a given position, 'pos'.
Note:   Assume that the Indexing for the linked list always starts from 0.
        If the given position 'pos' is greater than length of linked list, then you should return the same linked list without any change. 
        And if position 'pos' is equal to length of input linked list, then insert the node at the last position.
        
Sample Input 1:
1
3 4 5 2 6 1 9 -1
3 100

Sample Output 1:
3 4 5 100 2 6 1 9
*/





******************************************************************************************************************************************************************************

//solution:
************


//RECURSIVE APPROACH
Node *insertNode(Node *head, int pos, int data)
{
   //base case
   if(head == NULL)
      return head;
   if(pos == 0)
   {
      Node *newNode = new Node(data);
      newNode->next = head;
      head = newNode;
      return head;
   }
   head->next = insertNode(head->next, pos-1, data);
   return head;
}






***************************************************************************************************************************************************************************

























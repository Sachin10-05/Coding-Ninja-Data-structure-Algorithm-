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


















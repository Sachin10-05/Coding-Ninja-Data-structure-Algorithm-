/*
problem:
********
Given a BST, convert it into a sorted linked list. You have to return the head of LL.

Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
Sample Output 1:
2 5 6 7 8 10
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-1:
*************

/*
Algo:
Step-1: inorder of BST gives sorted values. store it in array
step-2: convert array to LL.
*/

//T.C = O(N)
//S.C = O(N)


void inorder(BinaryTreeNode<int>* root, vector<int> &arr)
{
   //base case
   if(root == NULL)
      return;
    
   //inorder
   inorder(root->left, arr);
   arr.push_back(root->data);
   inorder(root->right, arr);
}


Node<int>* constructLinkedList(BinaryTreeNode<int>* root) 
{
   // Write your code here
   //base case
   if(root == NULL)
      return NULL;
    
 	 vector<int> arr;
   inorder(root, arr);
    
   //create LL from sorted Array
   Node<int>* head = new Node<int>(arr[0]);  //head node
   Node<int>* tail = head;
   for(int i=1;i<arr.size();i++)
   {
      Node<int>* temp = new Node<int>(arr[i]);
      tail->next = temp;
      tail = temp;
   }
   tail->next = NULL;
   return head;
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-2:
*************

//T.C = O(N)
//S.C = O(H)

/*
class Pair
{
   public:
   Node<int> *head;
   Node<int> *tail;
};


Pair BST(BinaryTreeNode<int> *root)
{
   if (root == NULL)
   {
      Pair ans;
      ans.head = NULL;
      ans.tail = NULL;
      return ans;
   }

   Node<int> *node = new Node<int>(root->data);

   Pair leftans = BST(root->left);
   Pair rightans = BST(root->right);

   Pair ans;

   if (leftans.head == NULL && rightans.head == NULL)
   {
      ans.head = node;
      ans.tail = node;
   }
   else if (!leftans.head && rightans.head)
   {
      ans.head = node;
      node->next = rightans.head;
      ans.tail = rightans.tail;
   }
   else if (leftans.head && rightans.head == NULL)
   {
      ans.head = leftans.head;
      leftans.tail->next = node;
      ans.tail = node;
   }
   else
   {
      ans.head = leftans.head;
      leftans.tail->next = node;
      node->next = rightans.head;
      ans.tail = rightans.tail;
   }
   return ans;
}




Node<int>* constructLinkedList(BinaryTreeNode<int>* root) 
{
   // Write your code here
   return BST(root).head;
}
*/








****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//main-code:
-------------


#include <iostream>
#include <queue>
using namespace std;


//for LL
template <typename T>
class Node 
{
   public:
   T data;
   Node<T>* next;
   Node(T data) 
   {
      this->data = data;
      this->next = NULL;
   }
};



//for BST
template <typename T>
class BinaryTreeNode
{
};



BinaryTreeNode<int>* takeInput()
{
}



int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   Node<int>* head = constructLinkedList(root);
   while (head != NULL) 
   {
      cout << head->data << " ";
      head = head->next;
   }
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
























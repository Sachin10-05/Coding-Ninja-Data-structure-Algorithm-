/*
problem:
********
Given a binary tree, write code to create a separate linked list for each level. You need to return the array which contains head of each level linked list.

Sample Input 1:
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1

Sample Output 1:
5 
6 10 
2 3 
9
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
***********

#include <iostream>
#include <queue>
#include <vector>
using namespace std;



template <typename T>
class Node 
{
   public:
   T data;
   Node<T> *next;
   Node(T data) 
   {
      this->data = data;
      this->next = NULL;
   }
};



template <typename T>
class BinaryTreeNode 
{
   public:
   T data;
   BinaryTreeNode<T> *left;
   BinaryTreeNode<T> *right;
   BinaryTreeNode(T data) 
   {
      this->data = data;
      left = NULL;
      right = NULL;
   }
};



BinaryTreeNode<int> *takeInput()
{
}



void print(Node<int> *head) 
{
   Node<int> *temp = head;
   while (temp != NULL) 
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}




vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) 
{
   // Write your code here
   vector<Node<int> *> v = {NULL};
   if (root == NULL)
      return v;
   else
      v.clear();
   queue<BinaryTreeNode<int> *> pendingNodes;
   pendingNodes.push(root);
   while (pendingNodes.size() != 0)
   {
      int n = pendingNodes.size();
      Node<int> *head = NULL;
      Node<int> *tail = NULL;
      while (n != 0)
      {
         BinaryTreeNode<int> *front = pendingNodes.front();
         pendingNodes.pop();
         Node<int> *newNode = new Node<int>(front->data);
         if (head == NULL)
         {
            head = newNode;
            tail = newNode;
         }
         else
         {
            tail->next = newNode;
            tail = newNode;
         }
         if (front->left != NULL)
            pendingNodes.push(front->left);
         if (front->right != NULL)
            pendingNodes.push(front->right);
         n--;
      }
      v.push_back(head);
   }
   return v;
}





int main() 
{
   BinaryTreeNode<int> *root = takeInput();
   vector<Node<int> *> ans = constructLinkedListForEachLevel(root);
   for (int i = 0; i < ans.size(); i++) 
   {
      print(ans[i]);
   }
}







*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************


















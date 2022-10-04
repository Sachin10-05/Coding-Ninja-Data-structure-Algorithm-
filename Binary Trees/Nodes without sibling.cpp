/*
problems:
*********
For a given Binary Tree of type integer, print all the nodes without any siblings.
Sample Input 1:
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1:
9    

Sample Input 2:
2 4 5 6 -1 -1 7 20 30 80 90 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 2:
6 7  
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
************


#include <iostream>
#include <queue>
using namespace std;


template <typename T>
class BinaryTreeNode 
{
};



BinaryTreeNode<int>* takeInput()
{
}




void printNodesWithoutSibling(BinaryTreeNode<int> *root) 
{
   // Write your code here
   if (root == NULL)
      return;
   if (root->left != NULL && root->right == NULL)
      cout << root->left->data << " ";
   else if (root->left == NULL && root->right != NULL)
      cout << root->right->data << " ";
   printNodesWithoutSibling(root->left);
   printNodesWithoutSibling(root->right);
}




int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   printNodesWithoutSibling(root);
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************























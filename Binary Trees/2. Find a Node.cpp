/*
problem:
********
For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.
Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
7
Sample Output 1:
true
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
************


#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode 
{
};



BinaryTreeNode<int> *takeInput()
{
}



bool isNodePresent(BinaryTreeNode<int>* root,int x)
{
   //base case
   if(root == NULL)
      return false;
    
   if(root->data == x)
      return true;
    
   //first recursive call
   if(isNodePresent(root->left, x))
      return true;
    
   //second recursive call
   if(isNodePresent(root->right, x))
      return true;
   else
      return false;
}




int main() 
{
   BinaryTreeNode<int> *root = takeInput();
   int x;
   cin >> x;
   cout << ((isNodePresent(root, x)) ? "true" : "false");
}






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************




























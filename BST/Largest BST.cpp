/*
problem:
********
Given a Binary tree, find the largest BST subtree. That is, you need to find the BST with maximum height in the given binary tree. 
You have to return the height of largest BST.

Sample Input 1:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1:
2
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********

//T.C = O(N)
//S.C = O(H)

#include <climits>
#include <cmath>
class Pair
{
   public:
   int minimum;
   int maximum;
   bool isBST;
   int height;
};


Pair BST(BinaryTreeNode<int> *root)
{
   if (root == NULL)
   {
      Pair obj;
      obj.minimum = INT_MAX;
      obj.maximum = INT_MIN;
      obj.isBST = true;
      obj.height = 0;
      return obj;
   }

   Pair left = BST(root->left);
   Pair right = BST(root->right);

   int minimum = min(root->data, min(left.minimum, right.minimum));
   int maximum = max(root->data, max(left.maximum, right.maximum));
   bool isBSTfinal = (root->data > left.maximum) && (root->data < right.minimum) && left.isBST && right.isBST;

   Pair obj;
   obj.minimum = minimum;
   obj.maximum = maximum;
   obj.isBST = isBSTfinal;
   if (isBSTfinal)
   {
      obj.height = 1 + max(left.height, right.height);
   }
   else
      obj.height = max(left.height, right.height);
   return obj;
}


int largestBSTSubtree(BinaryTreeNode<int> *root) 
{
   // Write your code here
   return BST(root).height;
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//main-code:
------------

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



int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   cout << largestBSTSubtree(root);
   delete root;
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************



























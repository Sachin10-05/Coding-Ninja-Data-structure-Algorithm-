/*
problem:
********
Given a binary tree and data of two nodes, find 'LCA' (Lowest Common Ancestor) of the given two nodes in the binary tree.
LCA:- LCA of two nodes A and B is the lowest or deepest node which has both A and B as its descendants. 

Note:
    1. If out of 2 nodes only one node is present, return that node. 
    2. If both are not present, return -1.
    
Example:           5
                 /   \
 LCA   -------- 10    6
               /  \
              2    3
                    \
                     9

Sample Input 1:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
2 10
Sample Output 1:
10

Sample Input 2:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
2 6
Sample Output 2:
5

Sample Input 3:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
12 78
Sample Output 3:
-1
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
************


int getLCA(BinaryTreeNode<int>* root , int val1 , int val2)
{
   //base case
   if(root == NULL)
      return -1;
    
   if(root->data==val1 || root->data==val2)
      return root->data;
    
   int leftAns = getLCA(root->left, val1, val2);
   int rightAns = getLCA(root->right, val1, val2);
    
   //case-1:
   if(leftAns!=-1 && rightAns!=-1)
      return root->data;
   
   //case-2:
   else if(leftAns!=-1 && rightAns==-1)
      return leftAns;
    
   //case-3:
   else if(leftAns==-1 && rightAns!=-1)
      return rightAns;
    
   //case-4:
   else
      return -1;
}









****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//main-code:
-------------

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
   int a, b;
   cin >> a >> b;
   cout << getLCA(root, a, b);
   delete root;
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************




















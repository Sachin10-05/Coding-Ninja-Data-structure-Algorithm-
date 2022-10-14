/*
problem:
********
Given a binary search tree and data of two nodes, find 'LCA' (Lowest Common Ancestor) of the given two nodes in the BST.
LCA:-  LCA of two nodes A and B is the lowest or deepest node which has both A and B as its descendants. 

Note:
  1. If out of 2 nodes only one node is present, return that node. 
  2. If both are not present, return -1.
  3. all the node data will be unique.
  
Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2 10
Sample Output 1:
8

Sample Input 2:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2 6
Sample Output 2:
5

Sample Input 3:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
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
	// Write your code here
    //base case
    if(root == NULL)
        return -1;
    
    //case-1:
    if(val1 < root->data && val2 < root->data)
    {
        return getLCA(root->left, val1, val2);
    }
    
    //case-2:
    else if(val1 > root->data && val2 > root->data)
    {
        return getLCA(root->right, val1, val2);
    }
    
    //case-3:
    // if(val1 < root->data && val2 > root->data)
    else
        return root->data;
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


























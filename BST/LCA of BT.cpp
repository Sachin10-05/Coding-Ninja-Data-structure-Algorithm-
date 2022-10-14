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


#include <vector>
void helper(BinaryTreeNode<int> *root, int k, vector<int> arr)
{
   //base case
   if(root == NULL)
      return;
    
   arr.push_back(root->data);
   k = k - root->data;
   if(!root->left && !root->right)
   {
      if(k==0)
      {
         for(int i : arr)
            cout << i << " ";
         cout << endl;
      }
      arr.pop_back();
   }
   helper(root->left, k, arr);
   helper(root->right, k, arr);
}


void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k)
{
	vector<int> arr;
    helper(root,k,arr);
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




















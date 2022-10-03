/*
problem:
********
Given a binary tree, check if it is balanced. Return true if given binary tree is balanced, false otherwise.
Balanced Binary Tree:
    A empty binary tree or binary tree with zero nodes is always balanced. For a non empty binary tree to be balanced, following conditions must be met:
          1. The left and right subtrees must be balanced.
          2. |hL - hR| <= 1, where hL is the height or depth of left subtree and hR is the height or depth of right subtree.    
          
Sample Input 1 :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1 :
false

Sample Input 2 :
1 2 3 -1 -1 -1 -1
Sample Output 2 :
true
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-1:
*************

//Optimized Approach
//T.C = O(N)
//S.C = O(N)


pair<bool, int> helper(BinaryTreeNode<int> *root)
{
   //base case
   if(root == NULL)
   {
      pair<bool, int> p = make_pair(true, 0);
      return p;
   }
    
   pair<int, int> left = helper(root->left);
   pair<int, int> right = helper(root->right);
    
   bool leftAns = left.first;
   bool rightAns = right.first;
    
   bool diff = abs(left.second - right.second) <= 1;
    
   pair<bool, int> ans;
   ans.second = max(left.second, right.second) + 1;
   if(leftAns && rightAns && diff)
   {
      ans.first = true;   
   }
   else
   {
      ans.first = false;
   }
   return ans;
}


bool isBalanced(BinaryTreeNode<int> *root)
{
    if(helper(root).first)
        return true;
    return false;
}










****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-2:
*************


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




//Brute-Force Approach
//T.C = O(N^2)
//S.C = O(N)

int height(BinaryTreeNode<int> *root)
{
   //base case
   if(root == NULL)
      return 0;
    
   int left_height = height(root->left);
   int right_height = height(root->right);
   int ans = max(left_height, right_height) + 1;
   return ans;
}


bool isBalanced(BinaryTreeNode<int> *root)
{
   //write your code here
   //base case
   if(root == NULL)
      return true;
    
   bool left = isBalanced(root->left);
   bool right = isBalanced(root->right);
   bool diff = abs(height(root->left) - height(root->right))  <= 1;
    
   if(left && right && diff)
      return true;
   else
      return false;
}




int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   cout << (isBalanced(root) ? "true" : "false");
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************






















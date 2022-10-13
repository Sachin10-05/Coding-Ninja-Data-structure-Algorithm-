/*
problem:
********
Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree). If yes, return true, return false otherwise.
Note: Duplicate elements should be kept in the right subtree.

Sample Input 1 :
3 1 5 -1 2 -1 -1 -1 -1
Sample Output 1 :
true
Sample Input 2 :
5 2 10 0 1 -1 15 -1 -1 -1 -1 -1 -1
Sample Output 2 :
false
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-1:
*************

//optimized soln
//T.C = O(N)
//S.C = O(H), in worst case s.c = O(N) i.e, in case of skewed binary tree. 

#include <climits>
bool helper(BinaryTreeNode<int>* root, int minimum, int maximum)
{
   //base case
   if(root == NULL)
      return true;
    
   if((root->data < minimum) || (root->data > maximum))
      return false;
    
   bool leftAns = helper(root->left, minimum, root->data);
   bool rightAns = helper(root->right, root->data, maximum);
   return leftAns & rightAns;
}

bool isBST(BinaryTreeNode<int> *root) 
{
   return helper(root, INT_MIN, INT_MAX);    
}








****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-2:
*************

//using property of BST
//i.e, inorder traversal of BST always gives sorted value.
//T.C = O(N)
//S.C = O(N*h)


#include<bits/stdc++.h>
bool isSorted(vector<int> arr)
{
   for(int i=0;i<arr.size()-1;i++)
   {
      if(arr[i+1] < arr[i])
         return false;
   }
   return true;
}


void inorder(BinaryTreeNode<int>* root, vector<int> &arr)
{
   //base case
   if(root == NULL)
      return;
   inorder(root->left, arr);
   arr.push_back(root->data);
   inorder(root->right, arr);
}


bool isBST(BinaryTreeNode<int> *root)
{
   vector<int> arr;
   //base case
   if(root == NULL)
      return true;
   inorder(root, arr);
   if(isSorted(arr))
      return true;
   else
      return false;
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-3:
**************


//Brute-Force Approach
//T.C = O(n*h)
//S.C = O(N)

#include <climits>
int Max(BinaryTreeNode<int> *root)
{
   //base case
   if(root == NULL)
      return INT_MIN;
   return max(root->data, max(Max(root->left), Max(root->right)));
}


int Min(BinaryTreeNode<int> *root)
{
   //base case
   if(root == NULL)
      return INT_MAX;
   return min(root->data, min(Min(root->left), Min(root->right)));
}


bool isBST(BinaryTreeNode<int> *root) 
{
   //base case
   if(root == NULL)
      return true;
    
   //Algo:
   //case-1: Find max data of left subtree.
   //case-2: Find min data of right subtree.
   //case-3: check (leftMax < root->data >= rightMin).
   //case-4: Also every left and right should be BST.
    
   int leftMax = Max(root->left);
   int rightMin = Min(root->right);
    
   bool ans = (root->data > leftMax) && (root->data <= rightMin) && (isBST(root->left)) && (isBST(root->right));
   return ans;
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
   cout << (isBST(root) ? "true" : "false");
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
























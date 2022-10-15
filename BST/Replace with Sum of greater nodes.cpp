/*
problem:
********
Given a binary search tree, you have to replace each node's data with the sum of all nodes which are greater or equal than it. 
You need to include the current node's data also.
That is, if in given BST there is a node with data 5, you need to replace it with sum of its data (i.e. 5) and all nodes whose data is greater than or equal to 5.
Note: You don't need to return or print, just change the data of each node.

Sample Input 1 :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
Sample Output 1 :
18 
36 10 
38 31 
25 
*/





***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

//solution:
************


void helper(BinaryTreeNode<int>* &root, int &sum)
{
   //base case
   if(root==NULL)
      return;
   helper(root->right, sum);
   sum = sum + root->data;
   root->data = sum;
   helper(root->left,sum);
}


void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) 
{
   // Write your code here
   //base case
   if(root==NULL)
      return;
   int sum=0;
   helper(root, sum);
}








***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

//main-code:
------------

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



void printLevelATNewLine(BinaryTreeNode<int> *root) 
{
   if (root == NULL) 
      return;
   queue<BinaryTreeNode<int> *> q;
   q.push(root);
   q.push(NULL);
   while (!q.empty()) 
   {
      BinaryTreeNode<int> *first = q.front();
      q.pop();
      if (first == NULL) 
      {
         if (q.empty()) 
         {
            break;
         }
         cout << endl;
         q.push(NULL);
         continue;
      }
      cout << first->data << " ";
      if (first->left != NULL) 
      {
         q.push(first->left);
      }
      if (first->right != NULL) 
      {
         q.push(first->right);
      }
   }
}



int main() 
{
   BinaryTreeNode<int> *root = takeInput();
   replaceWithLargerNodesSum(root);
   printLevelATNewLine(root);
   delete root;
}






***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************























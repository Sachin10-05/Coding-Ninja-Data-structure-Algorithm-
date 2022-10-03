/*
problem:
********
Given a generic tree, find and return the node with second largest value in given tree.
Note: Return NULL if no node with required value is present.

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
40
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********

#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

template <typename T>
class TreeNode
{
};



TreeNode<int>* takeInputLevelWise()
{
}




void getSecondLargest(TreeNode<int> *root, TreeNode<int> **secondLargestNode, TreeNode<int> **largestNode)
{
   if (*largestNode == NULL)
      *largestNode = root;
   else if (*secondLargestNode == NULL && (root->data) < ((*largestNode)->data))
      *secondLargestNode = root;
   else if ((root->data) > ((*largestNode)->data))
   {
      *secondLargestNode = *largestNode;
      *largestNode = root;
   }
   else if ((root->data) < ((*largestNode)->data) && (root->data) > ((*secondLargestNode)->data))
      *secondLargestNode = root;
   for (int i = 0; i < root->children.size(); i++)
      getSecondLargest(root->children[i], secondLargestNode, largestNode);
}


TreeNode<int> *getSecondLargestNode(TreeNode<int> *root)
{
   // Write your code here
   if (root == NULL || root->children.size() == 0)
      return NULL;
   TreeNode<int> *secondLargestNode = NULL;
   TreeNode<int> *largestNode = NULL;
   getSecondLargest(root, &secondLargestNode, &largestNode);
   return secondLargestNode;
}




int main() 
{
   TreeNode<int>* root = takeInputLevelWise();
   TreeNode<int>* ans = getSecondLargestNode(root);
   if (ans != NULL) 
   {
      cout << ans->data;
   }
   else 
   {
      cout << INT_MIN;
   }
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************




























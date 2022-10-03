/*
problem:
********
Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
Note: Return NULL if no node is present with the value greater than n.

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
18
Sample Output 1 :
20

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0 
21
Sample Output 2:
30
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
************

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
};



TreeNode<int>* takeInputLevelWise()
{
}




#include <climits>
void getNextLarger(TreeNode<int> *root, TreeNode<int> **nextLarger, int *num, int x)
{
   if (root->data > x && root->data <= *num)
   {
      *num = root->data;
      *nextLarger = root;
   }
   for (int i = 0; i < root->children.size(); i++)
      getNextLarger(root->children[i], nextLarger, num, x);
}


TreeNode<int> *getNextLargerElement(TreeNode<int> *root, int x)
{
   // Write your code here
   if (root == NULL)
      return NULL;
   TreeNode<int> *nextLarger;
   int num = INT_MAX;
   getNextLarger(root, &nextLarger, &num, x);
   return nextLarger;
}




int main() 
{
   TreeNode<int>* root = takeInputLevelWise();
   int x;
   cin >> x;
   TreeNode<int>* ans = getNextLargerElement(root, x);
   if (ans != NULL) 
   {
      cout << ans->data;
   }
}





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************





















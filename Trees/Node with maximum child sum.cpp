/*
problem:
********
Given a generic tree, find and return the node for which sum of its data and data of all its child nodes is maximum. 
In the sum, data of the node and data of its immediate child nodes has to be taken.

Sample Input 1 :
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
Sample Output 1 :
1
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
***********

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




TreeNode<int>* helper(TreeNode<int> *root, TreeNode<int> *maxNode, int max_sum)
{
   int sum=root->data;
   for(int i=0;i<root->children.size();i++)
   {
      sum = sum + root->children[i]->data;
   }
   if(sum > max_sum)
   {
      max_sum = sum;
      maxNode = root;
   }
    
   //RECURSIVE CALL
   for(int i=0;i<root->children.size();i++)
   {
      maxNode = helper(root->children[i], maxNode, max_sum);
   }
   return maxNode;
}



TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
    TreeNode<int>* maxNode;
    int max_sum = 0;
    return helper(root, maxNode, max_sum);
}




int main() 
{
   TreeNode<int>* root = takeInputLevelWise();
   TreeNode<int>* ans = maxSumNode(root);
   if (ans != NULL) 
   {
      cout << ans->data;
   }
}






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************





























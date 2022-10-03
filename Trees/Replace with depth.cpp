/*
problem:
********
You are given a generic tree. You have to replace each node with its depth value. 
You just have to update the data of each node, there is no need to return or print anything.

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1:
0 
1 1 1 
2 2
*/




*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
***********

#include <climits>
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



void printLevelATNewLine(TreeNode<int>* root)
{
}



void replaceWithDepth(TreeNode<int> *root, int count)
{
   root->data = count;
   for (int i = 0; i < root->children.size(); i++)
      replaceWithDepth(root->children[i], count + 1);
}

void replaceWithDepthValue(TreeNode<int> *root)
{
   // Write your code here
   if (root == NULL)
      return;
   int count = 0;
   replaceWithDepth(root, count);
}




int main() 
{
   TreeNode<int>* root = takeInputLevelWise();
   replaceWithDepthValue(root);
   printLevelATNewLine(root);
}







*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************


























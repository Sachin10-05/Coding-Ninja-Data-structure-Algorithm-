/*
problem:
********
Given two generic trees, return true if they are structurally identical. Otherwise return false.

Structural Identical:
If the two given trees are made of nodes with the same values and the nodes are arranged in the same way, then the trees are called identical.  

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
10 3 20 30 40 2 40 50 0 0 0 0
Sample Output 1 :
true

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0 
10 3 2 30 40 2 40 50 0 0 0 0
Sample Output 2:
false
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



bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) 
{
   //base case
   if(root1==NULL || root2==NULL)
      return false;
    
   if(root1->children.size() != root2->children.size())
      return false;
    
   if(root1->data != root2->data)
      return false;
	
   //Recursive call
   for(int i=0;i<root1->children.size();i++)
   {
      return areIdentical(root1->children[i], root2->children[i]);
   }
   return true;
}




int main() 
{
   TreeNode<int>* root1 = takeInputLevelWise();
   TreeNode<int>* root2 = takeInputLevelWise();
   cout << (areIdentical(root1, root2) ? "true" : "false");
}








*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
















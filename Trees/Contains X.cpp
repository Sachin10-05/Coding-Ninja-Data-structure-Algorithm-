/*
problem:
********
Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0
40 
Sample Output 1 :
true

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0
4 
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




bool isPresent(TreeNode<int>* root, int x)
{
   if(root ==  NULL)
      return false;
    
   if(root->data == x)
      return true;
    
   for(int i=0;i<root->children.size();i++)
   {
      bool ans = isPresent(root->children[i], x);
      if(ans)
         return true;
   }
   return false;
}




int main() 
{
   TreeNode<int>* root = takeInputLevelWise();
   int x;
   cin >> x;
   cout << (isPresent(root, x) ? "true" : "false");
}






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************























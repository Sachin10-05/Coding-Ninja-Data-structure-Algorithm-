/*
problem:
********
For a given a Binary Tree of type integer, find and return the minimum and the maximum data values.
Return the output as an object of Pair class, which is already created.

Note: All the node data will be unique and hence there will always exist a minimum and maximum node data.
Ex:                     8
                      /   \
                    3       10
                   / \        \
                  1   6        14
                     / \      / 
                    4   7    13
Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output 1:
1 14

Sample Input 2:
10 20 60 -1 -1 3 50 -1 -1 -1 -1 
Sample Output 2:
3 60
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********

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




#include <climits>
void Min(BinaryTreeNode<int> *root, int &min)
{
   if (root == NULL)
      return;
   if (root->data < min)
      min = root->data;
   Min(root->left, min);
   Min(root->right, min);
}

void Max(BinaryTreeNode<int> *root, int &max)
{
   if (root == NULL)
      return;
   if (root->data > max)
      max = root->data;
   Max(root->left, max);
   Max(root->right, max);
}

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
   // Write your code here
   pair<int, int> p = {0, 0};
   if (root == NULL)
      return p;
   int min = INT_MAX, max = INT_MIN;
   Min(root, min);
   Max(root, max);
   p = {min, max};
   return p;
}





int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   pair<int, int> ans = getMinAndMax(root);
   cout << ans.first << " " << ans.second;
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************




















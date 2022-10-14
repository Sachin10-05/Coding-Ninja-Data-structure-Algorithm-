/*
problem:
********
For a given Binary Tree of type integer and a number K, print out all root-to-leaf paths where the sum of all the node data along the path is equal to K.
Ex:         2
          /   \
         3     9
       /  \     \
      4    8     2
     /          /
    4          6
K=13
If you see in the above-depicted picture of Binary Tree, we see that there are a total of two paths, starting from the root and ending at the leaves
which sum up to a value of K = 13.
The paths are:
a. 2 3 4 4
b. 2 3 8
One thing to note here is, there is another path in the right sub-tree in reference to the root, 
which sums up to 13 but since it doesn't end at the leaf, we discard it.
The path is: 2 9 2(not a leaf)


Sample Input 1:
2 3 9 4 8 -1 2 4 -1 -1 -1 6 -1 -1 -1 -1 -1
13
Sample Output 1:
2 3 4 4 
2 3 8

Sample Input 2:
5 6 7 2 3 -1 1 -1 -1 -1 9 -1 -1 -1 -1
13
Sample Output 2:
5 6 2
5 7 1
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
************



#include <vector>
void helper(BinaryTreeNode<int> *root, int k, vector<int> arr)
{
   //base case
   if(root == NULL)
      return;
    
   arr.push_back(root->data);
   k = k - root->data;
   if(!root->left && !root->right)
   {
      if(k==0)
      {
         for(int i : arr)
            cout << i << " ";
         cout << endl;
      }
      arr.pop_back();
   }
   helper(root->left, k, arr);
   helper(root->right, k, arr);
}


void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k)
{
   vector<int> arr;
   helper(root,k,arr);
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//main-code:
--------------

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
   int k;
   cin >> k;
   rootToLeafPathsSumToK(root, k);
   delete root;
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************



































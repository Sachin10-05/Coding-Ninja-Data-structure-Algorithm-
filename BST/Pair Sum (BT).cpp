/*
problem:
********
Given a binary tree and an integer S, print all the pair of nodes whose sum equals S.
Note:
  1. Assume the given binary tree contains all unique elements.
  2. In a pair, print the smaller element first. Order of different pairs doesn't matter.

Sample Input 1:
5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
15
Sample Output 1:
5 10
6 9
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



#include <algorithm>
#include <vector>
void inorder(BinaryTreeNode<int> *root, vector<int> &arr)
{
   //base case
   if(root == NULL)
      return;
    
   //inorder traversal
   inorder(root->left, arr);
   arr.push_back(root->data);
   inorder(root->right, arr);
}

void pairSum(BinaryTreeNode<int> *root, int s) 
{
   //base case
   if(root == NULL)
      return;
    
   vector<int> arr;
   inorder(root,arr);
    
   //sort the final arr
   sort(arr.begin(), arr.end());
    
   //two-pointer approach
   int i=0;
   int j= arr.size()-1;
   while(i<j)
   {
      if(arr[i] + arr[j] == s)
      {
         cout << arr[i] << " " << arr[j] << endl;
         i++;
         j--;
      }
      else if(arr[i]+arr[j] > s)
         j--;
      else
         i++;
   }
}




int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   int sum;
   cin >> sum;
   pairSum(root, sum);
   delete root;
}








****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************





















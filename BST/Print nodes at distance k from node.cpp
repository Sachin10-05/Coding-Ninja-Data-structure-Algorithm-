/*
problem:
********
You are given a Binary Tree of type integer, a target node, and an integer value K.
Print the data of all nodes that have a distance K from the target node. The order in which they would be printed will not matter.

Example:
    For a given input tree(refer to the image below):
    1. Target Node: 5
    2. K = 2
    
                       3
                     /   \
                   5       1
                  / \     / \ 
                 6   2    0  8
                    / \
                   7   4
    Starting from the target node 5, the nodes at distance K are 7 4 and 1.
Sample Input 1:
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
3 1
Sample Output 1:
9
6

Sample Input 2:
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
3 3
Sample Output 2:
4
5







***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

//solution:
************

void printkdistanceNodeDown(BinaryTreeNode<int> *root, int k)
{
   if (root == NULL || k < 0)
      return;
   if (k == 0)
   {
      cout << root->data << endl;
      return;
   }
   printkdistanceNodeDown(root->left, k - 1);
   printkdistanceNodeDown(root->right, k - 1);
}


int printkdistanceNode(BinaryTreeNode<int> *root, int target, int k)
{
   if (root == NULL)
      return -1;
   if (root->data == target)
   {
      printkdistanceNodeDown(root, k);
      return 0;
   }

   int dl = printkdistanceNode(root->left, target, k);
   if (dl != -1)
   {
      if (dl + 1 == k)
         cout << root->data << endl;
      else
         printkdistanceNodeDown(root->right, k - dl - 2);
      return 1 + dl;
   }
   int dr = printkdistanceNode(root->right, target, k);
   if (dr != -1)
   {
      if (dr + 1 == k)
         cout << root->data << endl;
      else
         printkdistanceNodeDown(root->left, k - dr - 2);
      return 1 + dr;
   }
   return -1;
}



void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) 
{
   // Write your code here
   int x = printkdistanceNode(root, node, k);
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


BinaryTreeNode<int>* takeInput() 
{
}


int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   int targetNode, k;
   cin >> targetNode >> k;
   nodesAtDistanceK(root, targetNode, k);
   delete root;
}







***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************



























               

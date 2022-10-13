/*
problem:
********
Given a sorted integer array A of size n, which contains all unique elements. 
You need to construct a balanced BST from this input array. Return the root of constructed BST.
Note: If array size is even, take first mid as root.

Output Format:
The first and only line of output contains values of BST nodes, printed in pre order traversal.

Sample Input 1:
7
1 2 3 4 5 6 7
Sample Output 1:
4 2 1 3 6 5 7 
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



//T.C = O(N)
//S.C = O(N)
BinaryTreeNode<int>* helper(int arr[], int start, int end)
{
   //base case
   if(start>end)
      return NULL;
   int mid = start + (end-start)/2;
   BinaryTreeNode<int>* root = new BinaryTreeNode<int>(arr[mid]);
   root->left = helper(arr,start,mid-1);
   root->right = helper(arr,mid+1,end);
   return root;
}

BinaryTreeNode<int>* constructTree(int *arr, int n) 
{
   //write your code here
   //base case
   if(n==0)
      return NULL;
    
   int start = 0;
   int end = n-1;
   return helper(arr,start,end);
}
	



BinaryTreeNode<int>* takeInput() 
{
}


void preOrder(BinaryTreeNode<int>* root) 
{
   if (root == NULL)
      return;
   cout << root->data << " ";
   preOrder(root->left);
   preOrder(root->right);
}


int main() 
{
   int size;
   cin >> size;
   int* input = new int[size];
   for (int i = 0; i < size; i++) cin >> input[i];
   BinaryTreeNode<int>* root = constructTree(input, size);
   preOrder(root);
   delete[] input;
}








****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************















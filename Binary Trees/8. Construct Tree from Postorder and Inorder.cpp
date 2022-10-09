/*
problem:
********
For a given postorder and inorder traversal of a Binary Tree of type integer stored in an array/list, create the binary tree using the given two arrays/lists.
You just need to construct the tree and return the root.

Note: Assume that the Binary Tree contains only unique elements. 

Sample Input 1:
7
4 5 2 6 7 3 1 
4 2 5 1 6 3 7 
Sample Output 1:
1 
2 3 
4 5 6 7 

Sample Input 2:
6
2 9 3 6 10 5 
2 6 3 9 5 10 
Sample Output 2:
5 
6 10 
2 3 
9 
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********

//T.C = O(N^2)
BinaryTreeNode<int>* helper(int post[], int in[], int postStart, int postEnd, int inStart, int inEnd)
{
   //BASE CASE
   if(postStart>postEnd || inStart>inEnd)
      return NULL;
    
   int rootData = post[postEnd];
   BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    
   //Find rootData index from inorder array.
   int pos=0;
   for(int i=inStart;i<=inEnd;i++)
   {
      if(in[i] == rootData)
      {
         pos=i;
         break;
      }
   }
    
   //RECURSIVE CALL
   root->left = helper(post, in, postStart, (postStart+pos-inStart-1), inStart, pos-1);
   root->right = helper(post, in, (postStart+pos-inStart), postEnd-1, pos+1, inEnd);
   return root;
}




BinaryTreeNode<int> *buildTree(int *postorder, int postLength, int *inorder, int inLength)
{
   // Write your code here
   int postStart = 0;               //postorder start index
   int postEnd = postLength-1;      //postorder End index
   int inStart = 0;                 //inorder start index
   int inEnd = inLength-1;          //inorder End index
   return helper(postorder, inorder, postStart, postEnd, inStart, inEnd);
}


















//main-code
------------
  
  
#include <iostream>
#include <queue>
using namespace std;


template <typename T>
class BinaryTreeNode 
{
   public:
   T data;
   BinaryTreeNode<T> *left;
   BinaryTreeNode<T> *right;

   BinaryTreeNode(T data) 
   {
      this->data = data;
      left = NULL;
      right = NULL;
   }
};



BinaryTreeNode<int> *takeInput() 
{
   int rootData;
   cin >> rootData;
   if (rootData == -1) 
   {
      return NULL;
   }
   BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
   queue<BinaryTreeNode<int> *> q;
   q.push(root);
   while (!q.empty()) 
   {
      BinaryTreeNode<int> *currentNode = q.front();
      q.pop();
      int leftChild, rightChild;
        
      cin >> leftChild;
      if (leftChild != -1) 
      {
         BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
         currentNode->left = leftNode;
         q.push(leftNode);
      }

      cin >> rightChild;
      if (rightChild != -1) 
      {
         BinaryTreeNode<int> *rightNode = new BinaryTreeNode<int>(rightChild);
         currentNode->right = rightNode;
         q.push(rightNode);
      }
   }
   return root;
}



void printLevelATNewLine(BinaryTreeNode<int> *root) 
{
   queue<BinaryTreeNode<int> *> q;
   q.push(root);
   q.push(NULL);
   while (!q.empty()) 
   {
      BinaryTreeNode<int> *first = q.front();
      q.pop();
      if (first == NULL) 
      {
         if (q.empty()) 
         {
            break;
         }
         cout << endl;
         q.push(NULL);
         continue;
      }
      cout << first->data << " ";
      if (first->left != NULL) 
      {
         q.push(first->left);
      }
      if (first->right != NULL) 
      {
         q.push(first->right);
      }
   }
}



int main() 
{
   int size;
   cin >> size;
   int *post = new int[size];
   int *in = new int[size];
   for (int i = 0; i < size; i++) cin >> post[i];
   for (int i = 0; i < size; i++) cin >> in[i];
   BinaryTreeNode<int> *root = buildTree(post, size, in, size);
   printLevelATNewLine(root);
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************























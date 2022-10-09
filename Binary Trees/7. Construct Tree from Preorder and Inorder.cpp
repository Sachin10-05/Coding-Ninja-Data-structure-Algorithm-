/*
problem:
********
For a given preorder and inorder traversal of a Binary Tree of type integer stored in an array/list, create the binary tree using the given two arrays/lists. 
You just need to construct the tree and return the root.

Note: Assume that the Binary Tree contains only unique elements. 


Sample Input 1:
7
1 2 4 5 3 6 7 
4 2 5 1 6 3 7 
Sample Output 1:
1 
2 3 
4 5 6 7 
Sample Input 2:
6
5 6 2 3 9 10 
2 6 3 9 5 10 
Sample Output 2:
5 
6 10 
2 3 
9 
*/





***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

//solution:
***********

/*
Algo:
step-1: Take rootData at startIndex of preorder array as ROOT Node.
step-2: Find root rootData position in inOrder.
step-3: Recursion call for root->left from inorderStart to inOrderPos-1
step-4: Recursion call for root->right from inOrder pos+1 to inorderSize-1
*/

//T.C = O(N^2)
//Note: but it can be optimized to O(N) using map at for loop. 

BinaryTreeNode<int>* helper(int pre[], int in[], int preStart, int preEnd, int inStart, int inEnd)
{
   //base case
   if(preStart > preEnd  ||  inStart > inEnd)
      return NULL;
    
   //Create Root Node.
   int rootData = pre[preStart];
   BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    
   //Find root element index from inorder array.
   int pos = 0;
   for(int i=inStart;i<=inEnd;i++)
   {
      if (in[i] == rootData)
      {
         pos = i;
         break;
      }
   }
    
   //Recursive call
   root->left = helper(pre, in, preStart+1, (preStart + (pos-inStart)), inStart, pos-1);
   root->right = helper(pre, in, (preStart + (pos-inStart)) + 1, preEnd, pos+1, inEnd);
   return root;
}


BinaryTreeNode<int> *buildTree(int preorder[], int preLength, int inorder[], int inLength)
{
   int preStart = 0;             //preorder start index
   int preEnd = preLength-1;     //preorder End index (Not Required)
   int inStart = 0;              //inorder start index
   int inEnd = inLength-1;       //inorder end index
   return helper(preorder, inorder, preStart, preEnd, inStart, inEnd);
}


BinaryTreeNode<int> *buildTree(int *preorder, int preLength, int *inorder, int inLength)
{
    // Write your code here
    return buildTreeHelper(inorder, preorder, 0, inLength - 1, 0, preLength - 1);
}










//main-code:
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
   //constructor
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
         BinaryTreeNode<int> *rightNode =
         new BinaryTreeNode<int>(rightChild);
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
   int *pre = new int[size];    //preorder array
   int *in = new int[size];     //inorder array
   for (int i = 0; i < size; i++) 
      cin >> pre[i];
   for (int i = 0; i < size; i++) 
      cin >> in[i];
   BinaryTreeNode<int> *root = buildTree(pre, size, in, size);
   printLevelATNewLine(root);
}









***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************









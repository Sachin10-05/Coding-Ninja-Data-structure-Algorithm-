/*
problem:
********
For a given a Binary Tree of type integer, duplicate every node of the tree and attach it to the left of itself.
The root will remain the same. So you just need to insert nodes in the given Binary Tree.

Ex-          10
           /    \
         20      30
       /    \      \
      40     50     60
After making the changes to the above-depicted tree, the updated tree will look like this.

                      10
                    /     \
                  10        30
                 /         /  \
                20        30   60
              /    \           /
             20     50        60
            /       /
           40     50
          /
         40
         
Sample Input 1:
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 1:
10 
10 30 
20 30 60 
20 50 60 
40 50 
40 

Sample Input 2:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
Sample Output 2:
8 
8 10 
5 10 
5 6 
2 6 7 
2 7
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-1:
*************

void insertDuplicateNode(BinaryTreeNode<int> *root) 
{
   //base case
   if(root==NULL)
      return;
    
   BinaryTreeNode<int>* temp = new BinaryTreeNode<int>(root->data);
   BinaryTreeNode<int>* rootLeft = root->left;
   root->left = temp;
   temp->left = rootLeft;
    
   insertDuplicateNode(rootLeft);
   insertDuplicateNode(root->right);
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-2:
*************

void insertDuplicateNode(BinaryTreeNode<int> *root) 
{
   // Write your code here
   //base case
   if (root == NULL)
      return;
   if (root->left != NULL)
   {
      BinaryTreeNode<int> *temp1 = root->left;
      BinaryTreeNode<int> *temp2 = new BinaryTreeNode<int>(root->data);
      root->left = temp2;
      temp2->left = temp1;
   }
   else
   {
      BinaryTreeNode<int> *temp = new BinaryTreeNode<int>(root->data);
      root->left = temp;
   }
   insertDuplicateNode(root->left->left);
   insertDuplicateNode(root->right);
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//main-code:
-------------

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



void printLevelATNewLine(BinaryTreeNode<int>* root) 
{
}



int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   insertDuplicateNode(root);
   printLevelATNewLine(root);
   delete root;
}








****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************















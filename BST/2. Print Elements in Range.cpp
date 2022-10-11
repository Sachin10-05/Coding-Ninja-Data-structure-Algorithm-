/*
problem:
********
Given a Binary Search Tree and two integers k1 and k2, find and print the elements which are in range k1 and k2 (both inclusive).
Print the elements in increasing order.

Ex-                 8
                  /   \
                 5     10
                / \
               2   6
                    \
                     7
Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
6 10
Sample Output 1:
6 7 8 10
*/




******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************

//solution-1:
*************


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




//T.C = O(N)
//S.C = O(h)

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) 
{
   //base case
   if(root == 	NULL)
      return;
    
   int m = min(k1,k2);   //min range
   int M = max(k1,k2);   //max range
    
   //case-1:
   if(m > root->data)
   {
      elementsInRangeK1K2(root->right, k1, k2);
   }
    
   //case-2:
   if(M < root->data)
   {
      elementsInRangeK1K2(root->left, k1, k2);
   }
    
   //case-3:
   if(m <= root->data && M >= root->data)
   {
      elementsInRangeK1K2(root->left, k1, k2);
      cout << root->data << " ";
      elementsInRangeK1K2(root->right, k1, k2);
   }
}
	



int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   int k1, k2;
   cin >> k1 >> k2;
   elementsInRangeK1K2(root, k1, k2);
}






******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************

//solution-2:
*************

//T.C = O(N), where N = No. of nodes in BST.
//S.C = O(h), where h = Height of BST.

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) 
{
   // Write your code here
   //base case
   if (root == NULL)
      return;
  
   //case-1:
   if (k1 < root->data && k2 < root->data)
      elementsInRangeK1K2(root->left, k1, k2);
   
   //case-2:
   else if (k1 > root->data && k2 > root->data)
      elementsInRangeK1K2(root->right, k1, k2);
  
   //case-3:
   else if (k1 <= root->data && k2 >= root->data)
   {
      elementsInRangeK1K2(root->left, k1, k2);
      cout << root->data << " ";
      elementsInRangeK1K2(root->right, k1, k2);
   }
}







******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************






















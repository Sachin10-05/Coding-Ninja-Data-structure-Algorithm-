/*
problem:
********
Implement the BST class which includes following functions -
1. insert -
   Given an element, insert that element in the BST at the correct position. If element is equal to the data of the node, insert it in the left subtree.

2. search -
   Given an element, find if that is present in BST or not. Return true or false.

3. delete -
   Given an element, remove that element from the BST. If the element which is to be deleted has both children, replace that with the minimum element from right sub-tree.

4. printTree (recursive) -
   Print the BST in in the following format -
   For printing a node with data N, you need to follow the exact format -
   N:L:x,R:y
   where, N is data of any node present in the binary tree. x and y are the values of left and right child of node N. Print the children only if it is not null.
   There is no space in between.
   You need to print all nodes in the recursive format in different lines.
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//main-code:
-------------


#include <iostream>
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



int main() 
{
   BST *tree = new BST();
   int choice, input, q;
   cin >> q;
   while (q--) 
   {
      cin >> choice;
      switch (choice) 
      {
         case 1:
            cin >> input;
            tree->insert(input);
            break;
         case 2:
            cin >> input;
            tree->remove(input);
            break;
         case 3:
            cin >> input;
            cout << ((tree->search(input)) ? "true\n" : "false\n");
            break;
         default:
            tree->print();
            break;
      }
   }
}





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************


















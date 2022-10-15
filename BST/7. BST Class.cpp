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

class BST
{
   //complete this class
   private:
      BinaryTreeNode<int>* root;   //root node
    
   public:
      //constructor
    	BST()
    	{
        	root = NULL;
    	}
    
    	//destructor
    	~BST()
    	{
        	delete root;
    	}
    
    
    
   //operation-1: SEARCH
   private:
      bool search(BinaryTreeNode<int>* node, int data) 
      { 
         //base case
			if (node == NULL) 
            return false; 
            
			if (node->data == data) 
            return true;
			else if (data < node->data) 
            return search(node->left, data);
			return search(node->right, data);
		}

    
   //operation-2: PRINT
   private:
      void printTree(BinaryTreeNode<int>* root)
      {
         //base case
         if(root == NULL)
            return;
         cout << root->data << ":";
         if(root->left != NULL)
         {
            cout << "L:" << root->left->data << ",";
         }
         if(root->right != NULL)
         {
            cout << "R:" << root->right->data;
         }
         cout << endl;
         printTree(root->left);
         printTree(root->right);
     }
    
    
   //operation-3: INSERTION
   private:
      BinaryTreeNode<int>* insert(BinaryTreeNode<int>* root, int data)
      {
         if (root == NULL)
        	{
            BinaryTreeNode<int> *temp = new BinaryTreeNode<int>(data);
            return temp;
        	}
         if (data <= root->data)
            root->left = insert(root->left, data);
        	else
            root->right = insert(root->right, data);
			return root;
     }
    
    
   //operation-4: DELETION
   private:
      BinaryTreeNode<int>* minVal(BinaryTreeNode<int>* root)
      {
         if(root->left==NULL)
            return root;
      }
    
      BinaryTreeNode<int>* remove(BinaryTreeNode<int>* root, int val)
      {
         //base case
         if(root == NULL)
            return root;
            
         if(root->data == val)
         {
            //case-1: 0 children 
            if(root->left==NULL && root->right==NULL)
            {
               delete root;
               return NULL;
            }
                
            //case-2: 1 children (left side)
            if(root->left!=NULL && root->right==NULL)
            {
               BinaryTreeNode<int>* temp = root->left;
               delete root;
               return temp;
            }
                
            //case-3: 1 children (right side)
            if(root->left==NULL && root->right!=NULL)
            {
               BinaryTreeNode<int>* temp = root->right;
               delete root;
               return temp;
            }
                
            //case-4: 2 children
            if(root->left!=NULL && root->right!=NULL)
            {
               int min = minVal(root->right)->data;
               root->data = min;
               root->right = remove(root->right, min);
               return root;
            }
         }
         else if(val > root->data)
         {
            root->right = remove(root->right, val);
         }
         else
         {
            root->left = remove(root->left, val);
         }
     }
    
    
    
   public:
   //function call
   void remove(int data)
   {
      root = remove(root, data);
   }
    
   void print()
   {
      printTree(root);
   }
    
   bool search(int val)
   {
      return search(root, val);
   }
    
   void insert(int data)
   {
      root = insert(root, data);
   }
};





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


















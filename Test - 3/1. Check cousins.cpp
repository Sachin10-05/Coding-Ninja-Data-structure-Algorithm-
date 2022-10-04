/*
problems:
*********
Given the binary Tree and two nodes say ‘p’ and ‘q’. Determine whether the two nodes are cousins of each other or not. 
Two nodes are said to be cousins of each other if they are at same level of the Binary Tree and have different parents.
Do it in O(n).

Input format :
    Line 1 : Nodes in level order form (separated by space). If any node does not have left or right child, take -1 in its place
    Line 2 : integer value of p 
    Line 3 : Integer value of q
Output format :
    true or false
Constraints :
    1 <= N <= 10^5
Sample Input :

5 6 10 2 3 4 -1 -1 -1 -1 9 -1 -1 -1 -1
2
4
Sample Output :
true
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********


bool isSibling(BinaryTreeNode<int> *root, int a, int b)
{
   if (root == NULL)
      return false;
   if (root->left != NULL && root->right != NULL)
      return ((root->left->data == a && root->right->data == b) || (root->left->data == b && root->right->data == a) || isSibling(root->left, a, b) || isSibling(root->right, a, b));
   else
      return false;
}



int level(BinaryTreeNode<int> *root, int val, int lev)
{
   if (root == NULL)
      return 0;
   if (root->data == val)
      return lev;
   int l = level(root->left, val, lev + 1);
   if (l != 0)
      return l;
   return level(root->right, val, lev + 1);
}



bool isCousin(BinaryTreeNode<int> *root, int a, int b) 
{
   // Write your code here
	 if ((level(root, a, 1) == level(root, b, 1)) && !(isSibling(root, a, b)))
      return true;
   else
      return false;
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


void printLevelATNewLine(BinaryTreeNode<int> *root) 
{
   queue<BinaryTreeNode<int>*> q;
	 q.push(root);
	 q.push(NULL);
	 while(!q.empty()) 
   {
	    BinaryTreeNode<int> *first = q.front();
			q.pop();
			if(first == NULL) 
      {
			   if(q.empty()) 
         {
				    break;
				 }
				 cout << endl;
				 q.push(NULL);
				 continue;
			}
			cout << first -> data << " ";
			if(first -> left != NULL) 
      {
			   q.push(first -> left);
			}
			if(first -> right != NULL) 
      {
			   q.push(first -> right);
			}
	 }
}




int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   int n1, n2;
   cin >> n1 >> n2;
   if(isCousin(root, n1, n2)) 
   {
	    cout << "true" << endl;
   }
   else 
   {
	    cout << "false" << endl;
   }
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************












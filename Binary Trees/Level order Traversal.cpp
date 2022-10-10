/*
problem:
********
For a given a Binary Tree of type integer, print it in a level order fashion where each level will be printed on a new line. 
Elements on every level will be printed in a linear fashion and a single space will separate them.
Ex-      10
        /  \
       20  30
      /  \   \
     40 50    60
Ans:- 10
      20 30 
      40 50 60
      
Sample Input 1:
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1 
Sample Output 1:
10 
20 30 
40 50 60 

Sample Input 2:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output 2:
8 
3 10 
1 6 14 
4 7 13 
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

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



void printLevelWise(BinaryTreeNode<int> *root) 
{
   // Write your code here
   //base case
   if(root == NULL)
      return;
   queue<BinaryTreeNode<int> *> pendingNodes;
   pendingNodes.push(root);
   while (pendingNodes.size() != 0)
   {
      int n = pendingNodes.size();
      while (n != 0)
      {
         BinaryTreeNode<int> *front = pendingNodes.front();
         pendingNodes.pop();
         cout << front->data << " ";
         if (front->left != NULL)
         {
            pendingNodes.push(front->left);
         }
         if (front->right != NULL)
         {
            pendingNodes.push(front->right);
         }
         n--;
      }
      cout << "\n";
   }
}




int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   printLevelWise(root);
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************



//solution-2:
*************


void printLevelWise(BinaryTreeNode<int> *root) 
{
   //base case
   if(root == NULL)
      return;
    
   queue<BinaryTreeNode<int>*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty())
   {
      BinaryTreeNode<int>* front = q.front();
      q.pop();
        
      if(front == NULL)
      {
         cout << "\n";
         if(!q.empty())
         {
            q.push(NULL);
         }
      }
      else
      {
         cout << front->data << " ";
         if(front->left != NULL)
         {
            q.push(front->left);
         }
        
         if(front->right != NULL)
         {
            q.push(front->right);
         }
      }
   }
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************





















/*
problem:
********
Given a binary tree, print the zig zag order. In zigzag order, level 1 is printed from left to right, level 2 from right to left and so on. 
This means odd levels should get printed from left to right and even level right to left.

Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
5
10 6
2 3
9
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
***********

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




void zigZagOrder(BinaryTreeNode<int> *root) 
{
   // Write your code here
   if (root == NULL)
      return;
   vector<BinaryTreeNode<int> *> pendingNodes;
   pendingNodes.push_back(root);
   int level = 1;
   while (pendingNodes.size() != 0)
   {
      int n = pendingNodes.size();
      if (level % 2 == 0)
      {
         for (int i = n - 1; i >= 0; i--)
            cout << pendingNodes[i]->data << " ";
      }
      else
      {
         for (auto i : pendingNodes)
            cout << i->data << " ";
      }
      for (int i = 0; i < n; i++)
      {
         BinaryTreeNode<int> *front = pendingNodes[i];
         if (front->left != NULL)
            pendingNodes.push_back(front->left);
         if (front->right != NULL)
            pendingNodes.push_back(front->right);
      }
      pendingNodes.erase(pendingNodes.begin(), pendingNodes.begin() + n);
      cout << "\n";
      level++;
   }
}





int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   zigZagOrder(root);
}






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************


//solution-2:
**************


void zigZagOrder(BinaryTreeNode<int> *root) 
{
   //base case
   if(root == NULL)
      return;
    
   queue<BinaryTreeNode<int>*> q;
   q.push(root);
    
   bool flag = true;
   while(!q.empty())
   {
      int size = q.size();
      vector<int> arr(size);    //temp array
      for(int i=0;i<size;i++)
      {
         BinaryTreeNode<int>* temp = q.front();
         q.pop();
         int index = flag ? i : (size-i-1);
         arr[index] = temp->data;
            
         if(temp->left != NULL)
         {
            q.push(temp->left);   
         }
            
         if(temp->right != NULL)
         {
            q.push(temp->right);
         }
      }
      //direction change
      flag = !flag;
        
      for(auto i:arr)
      {
         cout << i << " ";
      }
      cout << endl;
   }
}







*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
















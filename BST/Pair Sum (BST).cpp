/*
problem:
********
Given a binary search tree and an integer S, find pair of nodes in the BST which sum to S. You can use extra space of the order of O(log n).
Note:
  1. Assume BST contains all unique elements.
  2. In a pair, print the smaller element first.
Sample Input 1:
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
12
Sample Output 1:
2 10
5 7
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-1:
*************

//T.C = O(N)
//S.C = O(H) or O(log(N))


#include <stack>
int countnodes(BinaryTreeNode<int> *root)
{
   if (root == NULL)
      return 0;
   return 1 + countnodes(root->left) + countnodes(root->right);
}


void printNodesSumToS(BinaryTreeNode<int> *root, int s) 
{
   // Write your code here
   int totalnodes = countnodes(root);
   int count = 0;

   stack<BinaryTreeNode<int> *> inorder;
   stack<BinaryTreeNode<int> *> revinorder;

   BinaryTreeNode<int> *temp = root;
   while (temp != NULL)
   {
      inorder.push(temp);
      temp = temp->left;
   }
   temp = root;
    
   while (temp != NULL)
   {
      revinorder.push(temp);
      temp = temp->right;
   }

   while (count < totalnodes - 1)
   {
      BinaryTreeNode<int> *top1 = inorder.top();
      BinaryTreeNode<int> *top2 = revinorder.top();
      if (top1->data + top2->data == s)
      {
         cout << top1->data << " " << top2->data << endl;
         BinaryTreeNode<int> *top = top1;
         inorder.pop();
         count++;
         if (top->right)
         {
            top = top->right;
            while (top)
            {
               inorder.push(top);
               top = top->left;
            }
         }
         top = top2;
         revinorder.pop();
         count++;
         if (top->left)
         {
            top = top->left;
            while (top)
            {
               revinorder.push(top);
               top = top->right;
            }
         }
      }
      else if (top1->data + top2->data > s)
      {
         BinaryTreeNode<int> *top = top2;
         revinorder.pop();
         count++;
         if (top->left)
         {
            top = top->left;
            while (top)
            {
               revinorder.push(top);
               top = top->right;
            }
          }
      }
      else
      {
         BinaryTreeNode<int> *top = top1;
         inorder.pop();
         count++;
         if (top->right)
         {
            top = top->right;
            while (top)
            {
               inorder.push(top);
               top = top->left;
            }
         }
      }
   }
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-2:
*************


//T.C = O(N)
//S.C = O(N)

void inorder(BinaryTreeNode<int>* root, vector<int> &arr)
{
   //base case
   if(root == NULL)
      return;
    
   //Inorder traversal
   inorder(root->left,arr);
   arr.push_back(root->data);
   inorder(root->right,arr);
}


void printNodesSumToS(BinaryTreeNode<int> *root, int s) 
{
   // Write your code here
   //base case
   if(root == NULL)
      return;
    
   vector<int> arr;
   inorder(root, arr);
    
   //two-pointer approach
   int i=0;
   int j=arr.size()-1;
   while(i<j)
   {
      int sum = arr[i] + arr[j];
      if(sum==s)
      {
         cout << arr[i] << " " << arr[j] << endl;;
         i++;
         j--;
      }
      else if(sum > s)
         j--;
      else
        i++;
   }
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



BinaryTreeNode<int> *takeInput()
{
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
   BinaryTreeNode<int> *root = takeInput();
   int s;
   cin >> s;
   printNodesSumToS(root, s);
   delete root;
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************






























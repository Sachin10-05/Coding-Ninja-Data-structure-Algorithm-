/*
Given a generic tree, find and return the sum of all nodes present in the given tree.
Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 

Sample Output 1:
190
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution-1:
*************



int sumOfNodes(TreeNode<int>* root) 
{
   //base case
   if(root == NULL)
      return 0;
    
   int sum = root->data;
   for(int i=0;i<root->children.size();i++)
   {
      sum = sum + sumOfNodes(root->children[i]);
   }
   return sum;
}







*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution-2:
*************

#include <iostream>
#include <vector>
#include <queue>
using namespace std;


template <typename T>
class TreeNode 
{
   public:
   T data;
   vector<TreeNode<T>*> children;
   
   //constructor
   TreeNode(T data) 
   { 
      this->data = data; 
   }
 
   //destructor
   ~TreeNode() 
   {
      for (int i = 0; i < children.size(); i++) 
      {
         delete children[i];
      }
   }
};





//USING QUEUE
int sumOfNodes(TreeNode<int>* root) 
{
   // Write your code here
   int sum=0;
   queue<TreeNode<int>*> pendingNodes;
   pendingNodes.push(root);
    
   while(pendingNodes.size()!=0)
   {
      TreeNode<int>* front = pendingNodes.front();
      pendingNodes.pop();
      sum=sum+front->data;
            
      for(int i=0;i<front->children.size();i++)
      {
         pendingNodes.push(front->children[i]);
      }
   }
   return sum;
}





TreeNode<int>* takeInputLevelWise() 
{
   int rootData;
   cin >> rootData;
   TreeNode<int>* root = new TreeNode<int>(rootData);

   queue<TreeNode<int>*> pendingNodes;
   pendingNodes.push(root);
   while (pendingNodes.size() != 0) 
   {
      TreeNode<int>* front = pendingNodes.front();
      pendingNodes.pop();
      int numChild;
      cin >> numChild;
      for (int i = 0; i < numChild; i++) 
      {
         int childData;
         cin >> childData;
         TreeNode<int>* child = new TreeNode<int>(childData);
         front->children.push_back(child);
         pendingNodes.push(child);
      }
   }
   return root;
}




int main() 
{
   TreeNode<int>* root = takeInputLevelWise();
   cout << sumOfNodes(root);
}






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************





















/*
problem:
Find Diameter or widht of Binary Tree.
Ex-              1
               /   \
              2     3
             / \
            4   5
sample input 1:
1 2 3 4 5 -1 -1 -1 -1 -1 -1
sample output
4
*/





******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************


//solution:
************



#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BinaryTreeNode
{
    public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    
    //constructor
    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    
    //destructor
    ~BinaryTreeNode()
    {
        delete left;
        delete right;
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



/*
Algo:
case-1: when diamter is possible only from left subtree.so, find height of left subtree.
case-2: when diamter is possible only from right subtree.so, find height of right subtree.
case-3: when diamter can be from both subtree. find max(left and right subtree).
case-4: return max of all above three cases.
*/

//T.C = O(N^2)
//S.C = O(N) , due to recursive call
//Note: it can be optimized to O(N) using pair<int, int>
int height(BinaryTreeNode<int> *root)
{
    //base case
    if(root == NULL)
        return 0;
    //recursive call
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(BinaryTreeNode<int> *root)
{
    //base case
    if(root == NULL)
        return 0;
    
    int ans1 = diameter(root->left);
    int ans2 = diameter(root->right);
    int ans3 = height(root->left) + height(root->right) + 1;
    
    int ans = max(ans1, max(ans2,ans3));
    return ans;
}



int main()
{
    BinaryTreeNode<int>* root = takeInput();
    cout << diameter(root);
}









******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************





















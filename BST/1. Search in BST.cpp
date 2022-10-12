/*
problem:
********
Given a BST and an integer k. Find if the integer k is present in given BST or not. You have to return true, if node with data k is present, return false otherwise.
Note: Assume that BST contains all unique elements.

Ex:                8
                 /   \
                5     10
               / \
              2   6
                   \
                    7
              Binary Search Tree
Sample Input 1 :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2
Sample Output 1 :
true

Sample Input 2 :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
12
Sample Output 2 :
false
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
   public:
   T data;
   BinaryTreeNode<T> *left;
   BinaryTreeNode<T> *right;
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
      if (left) delete left;
      if (right) delete right;
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



//T.C = O(h)
//S.C = O(h), where h=height of binary search tree.
bool searchInBST(BinaryTreeNode<int> *root , int k) 
{
   //base case
   if(root == NULL)
      return false;
    
   if(root->data == k)
      return true;
	
   if(k > root->data)
   {
      return searchInBST(root->right, k);
   }
    
   if(k < root->data)
   {
      return searchInBST(root->left, k);
   }
}




int main() 
{
   BinaryTreeNode<int> *root = takeInput();
   int k;
   cin >> k;
   cout << ((searchInBST(root, k)) ? "true" : "false");
   delete root;
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************


//solution-2:
*************




//T.C = O(h)
//S.C = O(h), where h=height of binary search tree.
bool searchInBST(BinaryTreeNode<int> *root , int k) 
{
   //base case
   if(root == NULL)
      return false;
    
   if(root->data == k)
      return true;
   else if(k > root->data)
      return searchInBST(root->right, k);
   else
      return searchInBST(root->left, k);
}








****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************


//solution-3:
*************


//Iterative approach
//T.C = O(h)
//S.C = O(1)


bool searchInBST(BinaryTreeNode<int> *root , int k) 
{
   BinaryTreeNode<int>* temp = root;
   while(temp != NULL)
   {
      if(temp->data == k)
         return true;
      else if(k > root->data)
         temp = temp->right;
      else
         temp = temp->left;
   }
   return false;
}








****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************


































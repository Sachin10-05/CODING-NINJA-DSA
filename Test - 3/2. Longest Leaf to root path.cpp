/*
problem:
********
Given a binary tree, return the longest path from leaf to root. Longest means, a path which contain maximum number of nodes from leaf to root.
Input format :

Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Line 1 : Binary Tree 1 (separated by space)

Sample Input 1 :
 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1 :
9
3
6
5
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********


#include <cmath>
int height(BinaryTreeNode<int> *root)
{
   if (root == NULL)
      return 0;
   return 1 + max(height(root->left), height(root->right));
}



vector<int>* longestPath(BinaryTreeNode<int>* root) 
{
   // Write your code here
	 if (root->left == NULL && root->right == NULL)
   {
      vector<int> *ans = new vector<int>();
      ans->push_back(root->data);
      return ans;
   }
   int left = 0;
   int right = 0;
   if (root->left)
      left = height(root->left);
   if (root->right)
      right = height(root->right);
   if (left > right)
   {
      vector<int> *l = longestPath(root->left);
      l->push_back(root->data);
      return l;
   }
   else
   {
      vector<int> *r = longestPath(root->right);
      r->push_back(root->data);
      return r;
   }
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//main-code:
------------


#include <iostream>
#include <vector>
#include <queue>
using namespace std;


template <typename T>
class BinaryTreeNode 
{
};


BinaryTreeNode<int>* takeInput()
{
}


int main() 
{
   BinaryTreeNode<int>* root = takeInput();
   vector<int> *output = longestPath(root);
   vector<int> :: iterator i = output -> begin();
   while(i != output -> end()) 
   {
      cout << *i << endl;
    	i++;
   }
}







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************


















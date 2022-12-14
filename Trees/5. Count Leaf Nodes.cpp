/*
problem:
********
Given a generic tree, count and return the number of leaf nodes present in the given tree.
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 

Sample Output 1 :
4
*/





*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

//solution:
***********

#include <iostream>
#include <queue>
#include <vector>


class TreeNode 
{
};


TreeNode<int>* takeInputLevelWise()
{
}



int getLeafNodeCount(TreeNode<int>* root) 
{
   // Write your code here
   if (root == NULL)
      return 0;
   int count = 0;
   if (root->children.size() == 0)
      return 1;
   for (int i = 0; i < root->children.size(); i++)
      count = count + getLeafNodeCount(root->children[i]);
   return count;
}


int main() 
{
   TreeNode<int>* root = takeInputLevelWise();
   cout << getLeafNodeCount(root);
}






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************


























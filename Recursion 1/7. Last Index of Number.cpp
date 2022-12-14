/*
problems:
**********

Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. 
Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).

Sample Input :
4
9 8 10 8
8
Sample Output :
3
*/




***************************************************************************************************************************************************************************

//solution-1:
**************

#include<bits/stdc++.h>
using namespace std;

int lastIndex(int arr[], int n, int x)
{
   //base case
   if(n==0)
      return -1;
   if(arr[n-1] == x)
      return (n-1);
   return lastIndex(arr, n, x);
}


int main()
{
   int n;
   cin >> n;
  
   int *input = new int[n];
   for(int i = 0; i < n; i++) 
   {
      cin >> input[i];
   }
    
   int x;
   cin >> x;
   cout << lastIndex(input, n, x) << endl;
}







***************************************************************************************************************************************************************************




























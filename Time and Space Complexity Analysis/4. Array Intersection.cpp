/*
problem:
*********
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively.
You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists 
contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.

Constraints :
    1 <= t <= 10^2
    0 <= N <= 10^6
    0 <= M <= 10^6
    Time Limit: 1 sec 
    
Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10

Sample Output 1 :
2 3 4
10
*/





***************************************************************************************************************************************************************************

//solution
***********

// Time Complexity : O(nlogn)
// Space Complexity : O(logn) -> Auxilarry Space used for Sort Function


#include<bits/stdc++.h>
using namespace std;

void intersection(int *arr1, int *arr2, int n1, int n2)
{
   sort(arr1,arr1+n1);
   sort(arr2,arr2+n2);
    
   int i=0;
   int j=0;
   while(i<n1 && j<n2)
   {
      if(arr1[i] == arr2[j])
      {
         cout << arr1[i] << " ";
         i++;
         j++;
      }
      else if(arr1[i] > arr2[j])
      {
         j++;
      }
      else
      {
         i++;
      }
   }
}



int main()
{
   int t;
	 cin >> t;
	 while (t--)
	 {
      int size1, size2;
      cin >> size1;
		  int *input1 = new int[size1];
      for (int i = 0; i < size1; i++)
		  {
			   cin >> input1[i];
		  }

		  cin >> size2;
		  int *input2 = new int[size2];
      for (int i = 0; i < size2; i++)
		  {
			   cin >> input2[i];
		  }

		  intersection(input1, input2, size1, size2);
		
		  delete[] input1;
		  delete[] input2;
		  cout << endl;
   }
   return 0;
}





****************************************************************************************************************************************************************************











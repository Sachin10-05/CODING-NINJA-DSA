/*
problem:
********
You have been given two integer arrays/lists (ARR1 and ARR2) of size N and M, respectively. 
You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular 
value or to put it in other words, when there is a common value that exists in both the arrays/lists.

Note :
  * Input arrays/lists can contain duplicate elements.
  * The intersection elements printed would be in the order they appear in the second array/list (ARR2).
  
Constraints :
    0 <= N <= 10^6
    0 <= M <= 10^6
    Time Limit: 1 sec 
Sample Input 1 :
6
2 6 8 5 4 3
4
2 3 4 7 
Sample Output 1 :
2
3 
4

Sample Input 2 :
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
1 
2 
2
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution-1:
*************

//Approach-1
//Brute-Force Approach
//T.C = O(N^2)
//S.C = O(1)

/*
#include <vector>
#include <climits>
void printIntersection(int arr1[], int arr2[], int n, int m) 
{
   for(int i=0;i<m;i++)
   {
	    for(int j=0;j<n;j++)
      {
         if(arr2[i] == arr1[j])
         {
            cout << arr2[i] << endl;
            arr1[j] = INT_MIN;
            break;
         }
      }
   }
}
*/







****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************


//solution-2:
**************

//Appproach-2
//using Hashmaps
//T.C = O(N)
//S.C = O(N)

#include <iostream>
#include <unordered_map>
using namespace std;
void printIntersection(int arr1[], int arr2[], int n, int m) 
{
    unordered_map<int, int> freq;
    for(int i=0;i<m;i++)
    {
        freq[arr2[i]]++;
    }
    
    
    for(int i=0;i<n;i++)
    {
		if(freq[arr1[i]] > 0 )
        {
            cout << arr1[i] << endl;
            freq[arr1[i]]--;
        }
    }
}





int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}










****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************




































/*
Input-1: 
arr[] = {6, 5, 3, 2, 8, 10, 9}
k = 3 

Output:
arr[] = {10, 9, 8, 6, 5, 3, 2}
Explaination: decreasing order, so we need max priority queue.
*/





******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************

//solution:
***********

//Note: it is special case i.e, we need to sort element within range of K.


#include <iostream>
#include <queue>
using namespace std;

//T.C = (n+k)log(k), since k will be very small so
//T.C = O(N*Log(K)) ~ O(N)
void kSortedArray(int *arr, int n, int k)
{
   //step-1: create max heap
   priority_queue<int> pq;
   for(int i=0;i<k;i++)
   {
      pq.push(arr[i]);
   }
    
   //step-2: 
   int j=0;
   for(int i=k;i<n;i++)
   {
      arr[j] = pq.top();
      pq.pop();
      pq.push(arr[i]);
      j++;
   }
    
   //step-3:
   while(!pq.empty())
   {
      arr[j] = pq.top();
      pq.pop();
      j++;
   }
}





int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin >> arr[i];
    }
    int k;
    cin >> k;
    kSortedArray(arr,n,k);
    for(int i=0;i<n;i++)
    {
       cout << arr[i];
    }
    cout << endl;
    return 0;
}







******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************
******************************************************************************************************************************************************************************





















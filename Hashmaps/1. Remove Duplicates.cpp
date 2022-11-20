//solution:
***********

//T.C = O(N)
//S.C = O(1)

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
   int arr[] = {1,2,3,2,1,5,4,1,3};
   int n = 9;
    
   unordered_map<int, bool> m; 
   for(int i=0;i<n;i++)
   {
      if(m.count(arr[i]) > 0)
      {
         continue;
      }
      else
      {
         m[arr[i]] = true;
         cout << arr[i] << " ";
      }
   }
   return 0;
}






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************


























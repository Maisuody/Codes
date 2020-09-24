#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int deleteElement(int arr[], int n, int x)
{
   // Search x in array
   int i;
   for (i=0; i<n; i++)
      if (arr[i] == x)
         break;

   // If x found in array
   if (i < n)
   {
     // reduce size of array and move all
     // elements on space ahead
     n = n - 1;
     for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
   }

   return n;
}
int main()
{
    int n, arr[105],countt=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int x=arr[0];
    n=deleteElement(arr,n,x);

    sort(arr, arr+n, greater<int>());

    while(x<=arr[0]){
        arr[0]-=1;
        x++;
        countt++;
        sort(arr, arr+n, greater<int>());
    }

    cout << countt<< endl;
    return 0;
}

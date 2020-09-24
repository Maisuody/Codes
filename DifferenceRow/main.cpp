#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105];
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    cout<<arr[n-1]<<" ";
    for(int i=1; i<n-1;i++)
        cout<<arr[i]<<" ";

    cout<<arr[0]<<endl;

    return 0;
}

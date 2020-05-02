#include <iostream>
#include <cstdlib>
using namespace std;

void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min])
            min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

int main()
{
    int n,arr[10000],money,MIN=0,temp,temp1;
    while(cin>>n){
//   int *p=new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

selectionSort(arr,n);
    cin>>money;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int input=arr[i]+arr[j];
            if(money == input)
            {
                int MIN1= abs(arr[i]-arr[j]);
                MIN=min(MIN,MIN1);
                if (MIN<=MIN1){
                 temp=arr[i];
                 temp1=arr[j];
                }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<temp<<" and "<<temp1<<"."<<endl;
    }

    return 0;
}

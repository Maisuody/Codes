#include <iostream>

using namespace std;

int main()
{
    int n, arr[1005];
    bool flag=false,flag1=false;
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>arr[i];

    for (int i=0; i<n; i++)
    {
        flag1=false;
        flag= false;
        for(int j=i+2; j<n; j++)
        {
        if ((arr[i]>arr[j]&&arr[i+1]>arr[j]) || (arr[i]<arr[j]&&arr[i+1]<arr[j])){
        flag=true;
         }

         else{
         flag1=true;
         }
    }
          if(flag&&flag1){
        cout<<"yes"<<endl;
        return 0;}
    }
cout<<"no"<<endl;
    return 0;
}

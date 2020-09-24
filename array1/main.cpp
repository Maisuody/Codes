#include <iostream>

using namespace std;

int main()
{
    int n, a[105], pos[105], neg[105], zero[105],x=0,y=0,z=0;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
       if(a[i]<0){
        neg[x]=a[i];
        x++;
       }
       else if (a[i]==0){
        zero[y]=a[i];
        y++;
       }
       else if(a[i]>0)
       {
           pos[z]=a[i];
           z++;
       }
    }

    if (x%2==0){
        zero[y]= neg[x];
        x--;
        y++;
    }
    if(z==0){
        pos[z]=neg[x-1];
        pos[z+1]=neg[x-2];
        x-=2;
        z+=2;
    }
    if(x>0 && y>0 && z>0 && x%2!=0){
        cout<<x<<" ";
        for(int i=0; i<x;i++){
            cout<<neg[i]<<" ";
        }
        cout<<endl;
         cout<<z<<" ";
        for(int i=0; i<z;i++){
            cout<<pos[i]<<" ";
        }
        cout<<endl;
        cout<<y<<" ";
        for(int i=0; i<y;i++){
            cout<<zero[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}

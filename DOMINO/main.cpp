#include <iostream>

using namespace std;

int main()
{
    int n, up[105],low[105], sum1=0,sum2=0,countt=-1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>up[i]>>low[i];
        sum1 +=up[i];
        sum2 +=low[i];
    }

        if(sum1%2==0 && sum2%2==0){
                countt=0;
        }
        else if(sum1%2==1 && sum2%2==1){
        for(int i=0; i<n; i++){
            if (up[i]%2 != low[i]%2){
             countt=1;}
        }}

        else{
            countt=-1;
        }

    cout << countt << endl;
    return 0;
}

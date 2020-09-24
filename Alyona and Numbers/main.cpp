#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,m,countt=0;
    cin>>n>>m;
    memset(a,0,sizeof(a));
    memset(a,0,sizeof(a))
    for(int i=1;i<= n; i++){
        for (int j=1; j<=m;j++){
            if ((i+j)%5==0){
                countt++;
            }
        }
    }
    cout << countt << endl;
    return 0;
}

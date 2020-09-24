#include <iostream>

using namespace std;

int main()
{
    int n,minn[5],maxx[5],x=0,y=0;
    bool flag=true;
    cin>>n;

    for(int i=0; i<3; i++)
        cin>>minn[i]>>maxx[i];

    if(n<=maxx[0]+minn[2]+minn[1]){
        x=n-(minn[2]+minn[1]);
    }
    else{
        x=maxx[0];
    }
    n-=x;
    cout<<x<<" ";

    if(n<=maxx[1]+minn[2]){
        y=n-minn[2];
    }
    else{
        y=maxx[1];
    }
    cout<<y<<" "<<n-y<<endl;

    return 0;
}

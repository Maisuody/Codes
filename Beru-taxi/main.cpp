#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,n,x,y,v;
    double minn=0,des2=1,des1=0;
    cin >>a>>b>>n>>x>>y>>v;

    des1=sqrt(pow(a-x,2)+ pow(b-y,2));
    des2=des1/v;
    minn=des2;

    for(int i=0; i<n-1; i++){
    cin>>x>>y>>v;
    des1=sqrt(pow(a-x,2)+ pow(b-y,2));
    des2=des1/v;
    if (minn>=des2)
        minn=des2;
    }
    cout <<fixed<<setprecision(20) << minn<< endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int m, a[105], x,y,sum1=0, sum2=0;
    bool flag1=false, flag2=false;
    cin>>m;
    for(int i=0; i<m; i++)
   {
       cin>>a[i];
       sum2+=a[i];
   }

    cin>>x>>y;

    for(int i=0; i<m; i++)
    {
        sum1+=a[i];
        if ((sum1>=x && sum1<=y)&&(sum2-sum1>=x && sum2-sum1<=y ))
        {

             cout<<i+2<<endl;
             return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,s,minn=99,place=-1;
    cin>>n>>s;
    int d[105],cent[105];
    bool flag=false;
    for(int i=0; i<n; i++){
        cin>>d[i]>>cent[i];
        if(minn>cent[i] && cent[i]!=0 && d[i]<s )
        {
            minn=cent[i];
            place=i;
        }
        else if( cent[i]==0 && d[i]<=s ){
            flag=true;
        }

    }
    if(minn != 99 && place!=-1){
            minn= abs(100-minn);
        cout<<minn<<endl;
    }

    else{
        if (flag){
            minn=0;
        }
        else{
        minn=-1;}
        cout<<minn<<endl;
    }



    return 0;
}

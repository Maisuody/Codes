#include <iostream>

using namespace std;

int main()
{
    int n,m,arr[100005];

    while(cin>>n)
    {
        int countt=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
              countt++;
        }
        if(countt==n)
          cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<n-countt<<endl;
            int i=0,sum=1,blag=0;
            if(arr[0]==0)
            {
                for(i=0;i<n;i++)
                  if(arr[i]!=0)
                  {
            //        if(n-countt!=1)
          //            cout<<1<<" "<<i+1<<endl;
                      break;
                  }
                i++;
                for(;i<n;i++)
                {
                    if(arr[i]!=0)
                    {
                        cout<<sum<<" "<<i<<endl;
                        sum=i+1;
                    }
                }
                cout<<sum<<" "<<n<<endl;
            }
            else
            {
                for(i=0;i<n;i++)
                {
                    if(arr[i]!=0&&i!=0)
                    {
                        cout<<sum<<" "<<i<<endl;
                        sum=i+1;
                    }
                }
                cout<<sum<<" "<<n<<endl;
            }
        }
    }
    return 0;
}

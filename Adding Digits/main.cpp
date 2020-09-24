#include <iostream>

using namespace std;

int main()
{
 unsigned long long a,b,n,i=0;
    bool flag=false;
    cin>>a>>b>>n;

 unsigned long long res=a;


    for( i; i<10 ; i++){
       res=a*10+i;

        if (res%b == 0){
           i=1;
           flag=true;
           cout<<res;
           for (unsigned long long k=1;k<=n-1;k++)cout<<0;
           cout<<endl;
           break;
        }
        else{
            res=res-i;
        }
    }

   if(!flag) cout << -1 << endl;
    return 0;
}



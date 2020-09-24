#include <iostream>
#include <algorithm>
#include<cstdlib>
using namespace std;
float fun(int x){
float f =(x*(x+1))/2;
return f;
}
int main()
{

    int n,i=1,j=1;
    bool flag=false;
    cin>>n;

    for (i; fun(i)+fun(j)<=n ;i++){

        for(j;fun(i)+fun(j)<=n;j++){
                int y=fun(i);
                int z=fun(j);
            if (fun(i)+fun(j)==n){
                flag=true;
                cout << "YES" << endl;
                break;

            }
            }
            if(flag){
                break;}
                j=1;
    }
if (!flag){
           cout << "NO" << endl;}

    return 0;
}

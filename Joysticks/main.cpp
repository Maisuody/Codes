#include <iostream>

using namespace std;

int main()
{
    int a,b, temp=0,countt=0;
    cin>>a>>b;
    while (a>0 && b>0 && a+b>2){
         if (b>a){
            temp=a;
            a=b;
            b=temp;
         }
    a-=2;
    b+=1;
     countt++;
    }
    cout<<countt<<endl;
    return 0;
}

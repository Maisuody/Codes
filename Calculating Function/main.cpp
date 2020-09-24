#include <iostream>
#include <math.h>
using namespace std;

void  CalculatingFunction(long long n){

if(n%2 ==0 )
{
cout<<n/2<<endl;
}
else {

cout<<-(n+1)/2<<endl;
}

}
int main()
{
    long long n;
    cin>>n;
    CalculatingFunction(n);

    return 0;
}

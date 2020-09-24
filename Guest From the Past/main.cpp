#include <iostream>

using namespace std;

int main()
{
    long long n, a, b, c, countt=0;
    cin>>n>>a>>b>>c;
    while (n>=b){
        n=n-b;
        n=n+c;
        countt++;
    }
    while (n>=a){
        n=n-a;
        countt++;
    }

    cout << countt << endl;
    return 0;
}

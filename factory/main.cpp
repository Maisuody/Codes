#include <iostream>

using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    while(m%2==0)
        m/=2;
    if (n%m==0)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

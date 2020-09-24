#include <iostream>

using namespace std;

int main()
{
    int n,x,ai,bi, flag=0;
    cin>>n>>x;
    for (int i=0; i<n; i++){
         cin>>ai>>bi;
        if (ai == x || ai==7-x || bi==x || bi==7-x){
        cout << "NO" << endl;
        flag=1;
        break;
    }}
    if (flag==0)cout << "YES" << endl;

    return 0;
}

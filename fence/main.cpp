#include <iostream>

using namespace std;

int main()
{
    int t,a;
    cin>>t;
    int i=0;
    while (i != t){
        cin>>a;
        if (360%(180-a)==0)
        cout << "YES" << endl;
        else { cout << "NO" << endl;}
        i++;
    }
    return 0;
}

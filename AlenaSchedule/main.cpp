#include <iostream>
using namespace std;

int main()
{
    int n, count=0;
    int a[105];
    cin>>n;
    for (int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<n;i++)
    {
        if (a[i]==1)count++;
        else if (a[i]==0){
            if(a[i-1]==1 && a[i+1]==1)count++;
        }
    }

    cout << count << endl;
    return 0;
}

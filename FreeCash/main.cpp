#include <iostream>
#include <map>
using namespace std;

int main()
{
    long long n, h[100005], m[100005], count=1,max=1;
    cin>>n;

    for(long long i=1; i<=n; i++)
      cin>>h[i]>>m[i];

    for(long long i=1; i<=n; i++)
    {
        count=1;
    for(long long j=i+1; j<=n; j++){
        if(h[i]== h[j] && m[i]== m[j] )
        {
            count++;
        }}
    if(count >max){
        max=count;
    }

        i+=count-1;
    }
    cout << max << endl;
    return 0;
}

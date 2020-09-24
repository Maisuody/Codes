#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n,m,a[105][105],x=0, rankk=1,t;
    cin>>n>>m;
    map <int,int>b;
    // memset(b,0,sizeof(b));

    for(int i=0; i<m;i++){
        t=0;
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        if (a[i][j]>a[i][t]){
            t=j;
        }

        }
        b[t]++;
    }

    for(int y=0; y<n; y++){
            if(b[y]>b[rankk]){
                rankk=y;
            }
    }
    cout << rankk+1 << endl;
    return 0;
}

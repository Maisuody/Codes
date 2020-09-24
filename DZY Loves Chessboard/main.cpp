#include <iostream>
using namespace std;
int main()
{
    char arr[105][105];
    int m,n;
    bool flag=false;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }}
    for(int i=0;i<n;i++){
            if (i%2==0){

                for (int j=0;j<m;j++){
                if (arr[i][j]=='-')
                {
                    cout<<'-';
                }
                else if (j%2==0)cout<<'B';
                else cout<<'W';
                }
            }
            else{
               for(int j=0;j<m;j++){
                         if (arr[i][j]=='-')
                {
                    cout<<'-';
                }

                else if (j%2==1)cout<<'B';
                else cout<<'W';
                }
            }
            cout<<endl;
    }


    return 0;
}

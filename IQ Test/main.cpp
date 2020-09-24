#include <iostream>

using namespace std;

int main()
{
    char arr1[5][5];
    for(int i=0; i<4;i++){
        cin>>arr1[i];
    }

    int x=0,y=0;
    bool flag=false;
    for(int i=0; i<3;i++){
        for (int j=0;j<3;j++){
        if (arr1[i][j]=='#') x++; else y++;
        if (arr1[i][j+1]=='#') x++; else y++;
        if (arr1[i+1][j]=='#') x++; else y++;
        if (arr1[i+1][j+1]=='#') x++; else y++;
        if (x>=3 || y>=3 ){
            cout<<"YES"<<endl;
            flag=true;
            break;
        }
        x=0;
        y=0;
       /* else if(y==3 && x==1 ){
            cout<<"YES"<<endl;
            flag=true;
            break;
        }*/
        }
        if (flag) break;
        }
    if (!flag) cout<< "NO" << endl;
    return 0;
}

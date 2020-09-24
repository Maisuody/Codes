#include <iostream>

using namespace std;

int main()
{
    int n,x, y;
    bool flag=false;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x>>y;
        if(x!=y){
           flag=true;

        }
    }
    if(flag){
    cout << "Happy Alex" << endl;
    }
    else{
    cout<<"Poor Alex"<<endl;
     }
    return 0;
}

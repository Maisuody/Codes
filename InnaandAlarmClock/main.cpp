#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,m,mm,totx=0,toty=0;
    map<int,int> x;
    map<int,int> y;

    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>m>>mm;
        x[m]=1;
        y[mm]=1;
    }

     for (int i=0; i<n; i++)
     {
         totx +=x[i];
         toty +=y[i];
     }

     if(totx>=toty){
        cout<<toty<<endl;
     }
     else{
        cout<<totx<<endl;
     }

    //cout << "Hello world!" << endl;
    return 0;
}

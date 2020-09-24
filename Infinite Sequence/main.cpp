#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if (a==b){
         cout << "YES" << endl;
    }
  else if (a !=b && c==0) { cout << "No" << endl;}
  else if (c<0 && a>b){
    int sum=a;
    while(sum>b)
    sum+=c;
    if (sum ==b){
        cout << "YES" << endl;
        exit;
    }
  else {
    cout << "No" << endl;
  }
     }
else if (c>0 && a>b){cout << "No" << endl;}
else if (c<0 && a<b){cout << "No" << endl;}

else if (c>0 && a<b)
    {
    int sum=a;
    while(sum<b)
    sum+=c;
    if (sum ==b){
        cout << "YES" << endl;
        exit;
    }
  else {
    cout << "No" << endl;
  }
    }


    return 0;
}

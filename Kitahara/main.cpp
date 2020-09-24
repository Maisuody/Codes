#include <iostream>

using namespace std;

int main()
{
    int n, a[105], two=0, one=0,x=0,y=0;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
     {
         if(a[i]== 100){
            one+=a[i];
            x++;
         }
         else if (a[i]== 200){
            two+= a[i];
            y++;
         }
     }
     if(x==0 && y==1){
         cout <<"NO"<<endl;
        return 0;
     }
     else if(x==1 && y==0){
        cout <<"NO"<<endl;
        return 0;
     }
     else if(x==0 && y>0){
        if(n%2==0){
            cout << "YES" << endl;
            return 0;
        }
        else{
            cout <<"NO"<<endl;
            return 0;
        }
     }
    else if(y==0 && x>0){
        if(n%2==0){
            cout << "YES" << endl;
            return 0;
        }
        else{
            cout <<"NO"<<endl;
            return 0;
        }
     }

     int res=abs(two-one)/100;
     if (res%2!=0){
        cout <<"NO"<<endl;
     }
    else{
     cout << "YES" << endl;
    }
    return 0;
}

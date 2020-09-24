#include <iostream>

using namespace std;

int main()
{
    int n, a[105],a1[105],a2[105],a3[105];
    int count1=0, count2=0,count3=0;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        if (a[i]>0)
        {
            a1[count1]=a[i];
            count1++;
        }
        else if (a[i]<0)
        {
            a2[count2]=a[i];
            count2++;
        }
        else if (a[i]==0)
        {
            a3[count3]=a[i];
            count3++;
        }
    }

     if (count1==0)
    {
        a1[count1]=a2[count2-1];
        count1++;
        count2--;
        a1[count1]=a2[count2-1];
        count1++;
        count2--;
    }

    if (count2%2==0)
    {
        a3[count3]=a2[count2-1];
        count3++;
        count2--;

    }

  cout <<count2<<" ";
     for(int i=0; i<count2; i++){

        cout<<a2[i]<<" ";
    }
    cout<<endl;
    cout <<count1<<" ";
    for(int i=0; i<count1; i++){

        cout<<a1[i]<<" ";
    }
     cout<<endl;
cout <<count3<<" ";

    for(int i=0; i<count3; i++){

        cout<<a3[i]<<" ";
    }
    cout<<endl;

    return 0;
}

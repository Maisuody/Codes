/*#include <iostream>

using namespace std;

int main()
{
    int n,count1=0,count2=0,sum=0;
    string arr[1005];
    bool flag=false;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
     for (int i=0; i<n; i++){
       string temp=arr[i];
       int num= temp.length();
       for(int j=0; j<num-1; j++){
         if (temp[j]!=temp[j+1] ){
            count1++;
        if (count1>1)break;
         }
       }
       if (count1<=1){
          sum+=num;
       }
      count1=0;
    }
    cout << sum << endl;
    return 0;
}
*/
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
string  str[105];
int  main(){
    int n;
    cin>>n;
    for(int t=0;t<n;t++)	{
            cin>>str[t];	}
    int sum;
    int maxn=0;
    for(int i='a';i<='z';i++)	{
            for(int j=i;j<='z';j++)		{
                sum=0;
    for(int k=0;k<n;k++)			{
            int len=str[k].length();
    int m;
    for( m=0;m<len;m++)				{
            if(str[k][m]!=i&&str[k][m]!=j){
                break;}
    }

				if(m==len)

				{

					sum+=len;

				}

			}

			maxn=max(maxn,sum);

		}

	}



	cout<<maxn<<endl;

	return 0;

}

#include <iostream>

using namespace std;
string s;
long long ans=0;
long long turn(int f, int l){
  long long res=0;
  if(f!=l && s[f]=='0')return -1;
  for (int i=f; i<=l; i++){
    res= res*10+ (s[i]-'0');
    if(res>1000000)
        return-1;
  }
 return res;
}
int main()
{
long long ans=0;
    cin>>s;
    bool flag=false;
    for (int i=1; i<s.size();i++){
        for(int j=i+1; j< s.size();j++){
        long long s1=turn(0,i-1);
        long long s2=turn(i,j-1);
        long long s3=turn(j,s.length()-1);
        if (s1==-1||s2==-1||s3==-1)continue;
        ans=max(ans,s1+s2+s3);
            flag=true;
        }
    }
    if (flag)cout << ans<< endl;
   else cout <<-1<< endl;
    return 0;
}

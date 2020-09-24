#include <iostream>
#include <map>
#include <fstream>
using namespace std;

int main()
{

    int n,ar[30005],b,c;
    bool flag=false, flag1=false;
    map <int,int>a;

    ifstream infile;
    infile.open("input.txt");
    ofstream outfile;
    outfile.open("output.txt");

    infile>>n;
    for(int i=0; i<2*n; i++)
    {
        infile>>ar[i];
    }

 for(int i=0; i<2*n; i++){
        flag=false;
        flag1=false;
   for(int j=i+1; j<2*n; j++){
        flag1=true;
        if(a[j]){
            flag=true;
             continue;
        }
     else if(ar[i]== ar[j]){
     {
       outfile <<i+1 <<" "<<j+1<<endl;
        a[j]=1;
        flag=true;
        break;
       }
    }}
    if(!flag && flag1){
        outfile <<-1<<endl;
        outfile.close();
        return 0;
    }
 }
    outfile.close();

    return 0;
}

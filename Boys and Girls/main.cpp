#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream infile;
    ofstream outfile;
    infile.open("input.txt");
    outfile.open("output.txt");

    if (infile.fail()){
        cout <<"ther's an error"<<endl;
        exit(1);
    }
  //  std::ofstream cout("output.txt");
   int n,m;
    infile>>n>>m;
    if (n>m){
        int b=n-m;
        for (int i=0;i<m;i++){
          outfile<<'B'<<'G';
        }
        for(int j=0; j<b;j++){
            outfile<<'B';
        }
        }
    else{
     int c=m-n;
     for (int i=0;i<n;i++){
          outfile<<'G'<<'B';
        }
        for (int i=0;i<c;i++){
          outfile<<'G';
        }

        }


    return 0;
}

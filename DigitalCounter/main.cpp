#include <iostream>

using namespace std;

int main()
{
    int sol[]={2,7,2,3,3,4,2,5,1,2};
    int input;
    cin>>input;
    int result= input/10;
    int rest= input%10;

    cout << sol[result] * sol[rest] << endl;
    return 0;
}

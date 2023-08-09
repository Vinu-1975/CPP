//increment example
#include<iostream>
using namespace std;

int main()
{
    int i=1;
    //1 ->2-> 3
    i=i++ + ++i;
    cout<<i<<endl;
    return 0;
}
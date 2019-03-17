#include <iostream>

using namespace std;

int main()
{
    long long int n1,n2,total;
    while(cin >>n1 >>n2){
    if(n1>n2)
        total = n1 - n2;
    else
        total = n2 - n1;
    cout << total << endl;
    }
    return 0;

}

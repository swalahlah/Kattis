#include <iostream>

using namespace std;

int main()
{
    double statue;
    cin >> statue;
    int Count = 0;
    while(statue > 1){
        statue /= 2;
        ++Count;
    }
    ++Count;
    cout << Count << endl;
    return 0;
}

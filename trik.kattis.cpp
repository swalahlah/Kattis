#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned int current = 0;
    int data, month, input;

    cin>> data; cin >>month;

    for(int i = 0; i < month; i++){
        cin>> input;
        current += data - input;
    }

    cout << current + data << endl;
}

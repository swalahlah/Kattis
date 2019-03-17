#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, I;
    cin >> A; cin >> I;
    int bribe = A*I;
    while((bribe/A) >= (I-1)){
        bribe--;
    }
    bribe+=2;
    cout << bribe << endl;;
    return 0;
}

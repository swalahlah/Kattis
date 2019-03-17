#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B;
    cin >> A; cin >> B;
    int rA = 0, rB = 0;
    while(A/10 != 0){
        rA += A%10;
        rA *= 10;
        A /= 10;
    }
    while(B/10 != 0){
        rB += B%10;
        rB *= 10;
        B /= 10;
    }
    rA += A; rB +=B;
    if(rA > rB)
        cout << rA << endl;
    else
        cout << rB << endl;
    return 0;
}

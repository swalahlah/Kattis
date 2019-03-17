#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> ans;
    int T,input;
    cin >> T;
    float n = 0.0;
    for (int i = 0; i < T; i++){
        cin >> input;
        for (int j = 0; j < input; j++){
            n += 0.5;
            n *= 2;
        }
    cout << int(n) << endl;
    n = 0.0;
    }

    return 0;
}

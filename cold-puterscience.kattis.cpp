#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,t, num = 0;
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> t;
        if(t < 0)
            num++;
    }
    cout << num << endl;
}

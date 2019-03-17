#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    int length = str.length();
    for(int i = 0 ; i< length - 1; i++){
        if(str[i] == 's'){
            if(str[i+1] == 's'){
                cout << "hiss" << endl;
                return 0;
            }
        }
    }
    cout << "no hiss" << endl;
    return 0;
}

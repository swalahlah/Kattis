#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    int length =str.length();
    cout << str[0];
    for(int i = 1; i < length ; i ++){
        if(str[i] == '-'){
            cout<< str[i+1];
            i++;
        }
    }
    cout << endl;
    return 0;

}

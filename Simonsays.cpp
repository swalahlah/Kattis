#include <iostream>
#include <string>

using namespace std;

int main(){
    int tc;
    string str;
    cin >> tc;
    getline(cin,str);
    for(int i = 0 ; i < tc; i++){
        getline(cin,str);
        string simon = str.substr(0,10);
        if(simon == "Simon says")
            cout << str.substr(10,str.length()-1)<< endl;
    }
    return 0;
}

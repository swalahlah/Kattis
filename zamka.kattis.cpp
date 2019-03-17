#include <bits/stdc++.h>

using namespace std;

int main(){
    int cup[3] = {1,0,0};
    string str;
    getline(cin,str);
    int temp;
    int len = str.length();
    for (int i = 0; i < len; i++){
        if(str[i] == 'A'){
            temp = cup[0];
            cup[0] = cup[1];
            cup[1] = temp;
        }
        else if(str[i] == 'B'){
            temp = cup[1];
            cup[1] = cup[2];
            cup[2] = temp;
        }
        else{
            temp = cup[0];
            cup[0] = cup[2];
            cup[2] = temp;
        }

    }
    if(cup[0] == 1)
        cout << "1" << endl;
    else if(cup[1] == 1)
        cout << "2" << endl;
    else
        cout <<"3"<<endl;
    return 0;
}


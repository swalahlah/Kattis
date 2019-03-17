#include <bits/stdc++.h>

using namespace std;

int main(){
    int T = 0,C = 0,G = 0;
    int set_num;
    int points;
    string str;
    getline(cin,str);
    int len = str.length();
    for (int i = 0; i < len; i++){
        if(str[i] == 'T')
            T++;
        else if (str[i] == 'C')
            C++;
        else
            G++;
    }
    if(T <= C && T <= G)
        set_num = T;
    else if( C<=T && C<=G)
        set_num = C;
    else
        set_num = G;
    points = (T*T) + (C*C) +(G*G) + (set_num*7);
    cout << points << endl;
    return 0;
}

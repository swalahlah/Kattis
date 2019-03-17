#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cin >> num;
    int current_length = 2; //initial square has 2 nodes on each side
    for (int i = 0; i < num; i++){
        current_length = current_length * 2 -1;
    }
    cout << current_length* current_length <<endl;
    return 0;
}

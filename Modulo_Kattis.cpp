#include <bits/stdc++.h>
#define num_int 10
#define MAX_SIZE 42

using namespace std;

int main(){
    set <int> stored;
    int input;
    for (int i=0;i< num_int; i++){
        cin>> input;
        input = input % MAX_SIZE;
        stored.insert(input);
    }
    cout << stored.size()<< endl;
    return 0;
}


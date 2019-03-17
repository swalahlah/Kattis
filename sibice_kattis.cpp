#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, W, H, diagonal_sq;
    cin >> N; cin >> W; cin >> H;
    int arr[N];
    int input;
    diagonal_sq = W*W + H*H;
    for(int i  = 0 ; i < N ; i++){
        cin >> input;
        if(input <= W || input <= H || (input*input) <= diagonal_sq)
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    for (int j = 0; j < N ; j++){
        if(arr[j] == 1)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }
    return 0;
}

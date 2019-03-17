#include <bits/stdc++.h>

using namespace std;
int sum_digit(int num){
    int sum = 0;
    while(num){
        sum += num%10;
        num /= 10;
    }
    return sum;
}
int main(){
    int L,D,X;
    int N,M;
    cin >> L; cin >> D; cin >> X;
    for(int i = L; i < D+1; i++){
        if(sum_digit(i) == X){
            N = i;
            break;
        }
    }
    for (int j = D; j >= L; j--){
        if(sum_digit(j) == X){
            M = j;
            break;
        }
    }
    cout << N << endl << M <<endl;
    return 0;
}

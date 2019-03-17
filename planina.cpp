#include <bits/stdc++.h>

using namespace std;

int main(){
    int score[4][5];
    int current_score,max_score = 0;
    int winner = 0;
    for(int i = 0; i < 5; i ++){
        current_score = 0;
        for(int j = 0; j < 4; j++){
            cin >> score[i][j];
            current_score += score[i][j];
        }
        if(current_score > max_score){
            max_score = current_score;
            winner = i+1;
        }
    }
    cout << winner << " " << max_score << endl;
    return 0;
}

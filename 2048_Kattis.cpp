#include <bits/stdc++.h>

using namespace std;

void shift_left(int puzzle[][4]){
    int i,j,k;
    for(i = 0; i < 4; ++i){
        for(j = 1; j< 4; ++j){
                for(k = j; k >=1; k--){
                    if(puzzle[i][k] != 0 && puzzle[i][k-1] == 0){
                        puzzle[i][k-1] = puzzle[i][k];
                        puzzle[i][k] = 0;
                    }
                    else break;
                }
            }
        for(j = 0; j < 3; ++j){
            if(puzzle[i][j] == puzzle[i][j+1]){
                puzzle[i][j] *=2;
                for(k = j+1; k < 3; k++){
                    puzzle[i][k] = puzzle[i][k+1];
                }
                puzzle[i][k] = 0;
            }
        }
    }
}

void shift_up(int puzzle[][4]){
    int i,j,k;
    for(i = 0; i < 4; ++i){
        for(j = 1; j< 4; ++j){
                for(k = j; k >=1; k--){
                    if(puzzle[k][i] != 0 && puzzle[k-1][i] == 0){
                        puzzle[k-1][i] = puzzle[k][i];
                        puzzle[k][i] = 0;
                    }
                    else break;
                }
            }
        for(j = 0; j < 3; ++j){
            if(puzzle[j][i] == puzzle[j+1][i]){
                puzzle[j][i] *=2;
                for(k = j+1; k < 3; k++){
                    puzzle[k][i] = puzzle[k+1][i];
                }
                puzzle[k][i] = 0;
            }
        }
    }
}

void shift_right(int puzzle[][4]){
    int i,j,k;
    for(i = 0; i < 4; i++){
        for(j = 2; j>= 0;j--){
                for(k = j; k<3; k++){
                    if(puzzle[i][k] != 0 && puzzle[i][k+1] == 0){
                        puzzle[i][k+1] = puzzle[i][k];
                        puzzle[i][k] = 0;
                    }
                    else break;
                }
            }
        for(j = 3; j > 0; j--){
            if(puzzle[i][j] == puzzle[i][j-1]){
                puzzle[i][j] *=2;
                for(k = j-1; k > 0; k--){
                    puzzle[i][k] = puzzle[i][k-1];
                }
                puzzle[i][k] = 0;
            }
        }
    }
}

void shift_down(int puzzle[][4]){
    int i,j,k;
    for(i = 0; i < 4; i++){
        for(j = 2; j>= 0;j--){
                for(k = j; k<3; k++){
                    if(puzzle[k][i] != 0 && puzzle[k+1][i] == 0){
                        puzzle[k+1][i] = puzzle[k][i];
                        puzzle[k][i] = 0;
                    }
                    else break;
                }
            }
        for(j = 3; j > 0; j--){
            if(puzzle[j][i] == puzzle[j-1][i]){
                puzzle[j][i] *=2;
                for(k = j-1; k > 0; k--){
                    puzzle[k][i] = puzzle[k-1][i];
                }
                puzzle[k][i] = 0;
            }
        }
    }
}

int main(){
    int puzzle[4][4];
    for(int i = 0; i < 4 ; i++){
        for(int j = 0; j < 4; j++){
            cin >> puzzle[i][j];
        }
    }
    int direction;
    cin >> direction;
    switch(direction){
    case 0: //shift to the left
        shift_left(puzzle);
        break;
    case 1: //shift up
        shift_up(puzzle);
        break;
    case 2: //shift right
        shift_right(puzzle);
        break;
    case 3: //shift down
        shift_down(puzzle);
        break;
    default:
        cout << "Wrong input!" << endl;
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            cout << puzzle[i][j] << " ";
        cout << endl;
    }
    return 0;
}

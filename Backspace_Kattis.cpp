#include <bits/stdc++.h>

using namespace std;

void moveLeft(int board[][4]);
void moveUp(int board[][4]);
void moveRight(int board[][4]);
void moveDown(int board[][4]);

int main(){
    int board[4][4];
    int input;
    for (int i = 0 ; i < 4; i++){
        for(int j = 0; j <4 ; j++){
            cin >> input;
            board[i][j] = input;
        }
    }
    int move;
    cin >> move;
    switch (move){
        case 0: //move left
            moveLeft(board);
            break;
        case 1:
            moveUp(board);
            break;
        case 2:
            moveRight(board);
            break;
        case 3:
            moveDown(board);
            break;
    }
    for (int i = 0 ; i < 4; i++){
        for(int j = 0; j <4 ; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void moveLeft(int board[][4]){
    for (int i = 0; i < 4; i ++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] == 0){
                int k;
                for(k = j; k < 3; k++)
                    board[i][k] = board[i][k+1];
                board[i][k] = 0;
            }
            else if (board[i][j] == board[i][j+1]){
                board[i][j] *= 2;
                board[i][j+1] = 0;
            }
        }
    }
}

void moveUp(int board[][4]){
    for (int i = 0; i < 4; i ++){
        for(int j = 0; j < 3; j++){
            if(board[j][i] == 0){
                int k;
                for(k = j; k < 3; k++)
                    board[k][i] = board[k+1][i];
                board[k][i] = 0;
            }
            else if (board[j][i] == board[j+1][i]){
                board[j][i] *= 2;
                board[j+1][i] = 0;
            }
        }
    }
}

void moveRight(int board[][4]){
    for (int i = 0; i < 4; i ++){
        for(int j = 3; j > 0; j--){
            if(board[i][j] == 0){
                int k;
                for(k = j; k > 0; k--)
                    board[i][k] = board[i][k-1];
                board[i][k] = 0;
            }
            else if (board[i][j] == board[i][j-1]){
                board[i][j] *= 2;
                board[i][j-1] = 0;
            }
        }
    }
}

void moveDown(int board[][4]){
    for (int i = 0; i < 4; i ++){
        for(int j = 3; j > 0; j--){
            if(board[j][i] == 0){
                int k;
                for(k = j; k > 0; k--)
                    board[k][i] = board[k-1][i];
                board[k][i] = 0;
            }
            else if (board[j][i] == board[j-1][i]){
                board[j][i] *= 2;
                board[j-1][i] = 0;
            }
        }
    }
}

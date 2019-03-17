#include <bits/stdc++.h>

using namespace std;

char move_right(char X,int *x1,int *x2, char TH[][200]){

    if(*x2 > 198) //out of range
        X = '0';
    else{
        X = TH[*x1][*x2+1];
        TH[*x1][*x2+1] = '1';
    }
    cout << X << endl;
    return X;
}

char move_up(char X,int *x1,int *x2, char TH[][200]){
    if(*x1 < 1) //out of range
        X = '0';
    else{
        X = TH[*x1-1][*x2];
        TH[*x1-1][*x2] = '1';
    }
    return X;
}

char move_left(char X,int *x1,int *x2, char TH[][200]){
    if(*x2 < 1) //out of range
        X = '0';
    else{
        X = TH[*x1][*x2-1];
        TH[*x1][*x2-1] = '1';
    }
    return X;
}

char move_down(char X,int *x1,int *x2, char TH[][200]){

    if(*x2 > 198) //out of range
        X = '0';
    else{
        X = TH[*x1+1][*x2];
        TH[*x1+1][*x2] = '1';
    }
    return X;
}

int main(){
    int r,c;
    char TH[200][200] = {{0}};
    char X; //current location
    int x1 = 0, x2 = 0;
    int *x1_ptr = &x1, *x2_ptr = &x2; //index of X
    int moves = 0;
    cin >> r; cin >> c;
    for (int i = 0; i < r; i++){
        cin >> TH[i];
    }
    X = TH[0][0];
    cout << X << endl;
    TH[0][0] = '1';
    while(X!= 'T'){
        switch(X){
        case ('E'):
            move_right(X,&x1,&x2,TH);
            moves++;
            x2++;
            break;
        case ('N'):
            move_up(X,&x1,&x2,TH);
            moves++;
            x1--;
            break;
        case ('W'):
            move_left(X,&x1,&x2,TH);
            moves++;
            x2--;
            break;
        case ('S'):
            move_down(X,&x1,&x2,TH);
            moves++;
            x1++;
            break;
        case ('1'):
            cout << "Lost" << endl;
            return 0;
        default:
            cout << "Out" << endl;
            return 0;
        }

    }
    cout << moves << endl;
    return 0;
}

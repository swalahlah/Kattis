#include <iostream>

using namespace std;

int main(){
    int n1,n2;

    do {
        cin >> n1;
        while (n1 < 0 || n1 > 359){
            cout << "Please enter an integer from 0 to 359: " ;
            cin >> n1;
        }
    }while (n1 < 0 || n1 > 359);

    do {
        cin >> n2;
        while (n2 < 0 || n2 > 359){
            cout << "Please enter an integer from 0 to 359: " ;
            cin >> n2;
        }
    }while (n2 < 0 || n2 > 359);
    int clockwise, anticlockwise;
    if (n1 > n2){
        anticlockwise = n1- n2;
        clockwise = 360 - n1 + n2;
    }
    else{
        clockwise = n2 - n1;
        anticlockwise = 360 - n2 + n1;
    }
    if (anticlockwise < clockwise)
            cout << -anticlockwise <<endl;
    else
        cout << clockwise << endl;
}

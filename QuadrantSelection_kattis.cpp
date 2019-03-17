#include <iostream>

using namespace std;

int main(){
    int x,y;
    do{
        cin >> x;
        if (x <-1000 || x ==0 || x > 1000){
            cout << "Please enter a number between -1000 to 1000 for x, where x is not equal to zero: ";
            cin >> x;
        }
    }while (x  < - 1000 || x == 0 || x > 1000);
    do{
        cin >> y;
        if (y <- 1000 || y ==0 || y > 1000){
            cout << "Please enter a number between -1000 to 1000 for y, where y is not equal to zero: ";
            cin >> y;
        }
    }while (y < - 1000 || y == 0 || y > 1000);

    if (x > 0 ){
        if (y > 0)
            cout << "1" << endl;
        else
            cout << "4" << endl;
    }
    else{
        if (y>0)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
    return 0;
}

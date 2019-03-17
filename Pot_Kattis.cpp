#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    long int result= 0, input;
    do{
        cin >> N;
        if(N < 1 || N > 10)
            cout << "Please enter a valid integer N: ";
    }while (N < 1 || N >10);
    for (int i = 0; i < N; i++ ){
        cin >> input;
        while (input > 10000 || input < 10){
            cout << " Please enter a value from 10 to 9999: ";
            cin >> input;
        }
        int power;
        power = input % 10;
        input /= 10;
        result += (int)(pow(input, power)+0.5);
    }
    cout << result << endl;
    return 0;
}


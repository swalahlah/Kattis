#include <iostream>
#include <vector>

using namespace std;



int main(){
    int r,c;
    int steps = 0;
    char status;
    cin >> r >> c;
    vector <vector<char>> hunt;
    hunt.resize(r);
    for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            char temp;
            cin >> temp;
            hunt[i].push_back(temp);
        }
    }
    status = hunt[0][0];
    int x = 0, y = 0; //current position
    while(status != '0' && status != 'T'){
        switch(status){
                case 'E':
                    ++y;
                    if(y >=c){
                        cout << "Out" << endl;
                        return 0;
                    }
                    else{
                        status = hunt[x][y];
                        hunt[x][y-1] = '0';
                    }
                    break;
                case 'S':
                    ++x;
                    if(x >= r){
                        cout << "Out" << endl;
                        return 0;
                    }
                    else{
                        status = hunt[x][y];
                        hunt[x-1][y] = '0';
                    }
                    break;
                case 'N':
                    --x;
                    if (x < 0){
                        cout << "Out" << endl;
                        return 0;
                    }
                    else{
                        status = hunt[x][y];
                        hunt[x+1][y] = '0';
                    }
                    break;
                case 'W':
                    --y;
                    if(y < 0){
                        cout << "Out" << endl;
                        return 0;
                    }
                    else{
                        status = hunt[x][y];
                        hunt[x][y+1] ='0';
                    }
                    break;
            }
            ++steps;
    }
    if (status == 'T')
        cout << steps << endl;
    else
        cout << "Lost" << endl;


    return 0;
}

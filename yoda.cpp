#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int main(){
    string num1, num2;
    cin >> num1 >> num2;
    char x,y;
    string result1 = "", result2 = "";
    int i = num1.size() -1; int j = num2.size()-1;
    for(;i>=0 || j>=0; i--,j--){
        x = i>=0 ? num1[i]:'0';
        y = j>=0 ? num2[j]:'0';
        if(x == y){
            result1.insert(result1.begin(),x);
            result2.insert(result2.begin(),y);
        }
        else if(x > y){
            result1.insert(result1.begin(),x);
        }
        else{
            result2.insert(result2.begin(),y);
        }
    }
    if(result1 == "")
        cout << "yoda" << endl;
    else{
        cout << stoi(result1) << endl;
    }
    if(result2 == "")
        cout << "yoda" << endl;
    else
        cout <<stoi(result2)<< endl;
    return 0;
}

//Credits: https://github.com/cbdavide/competitive-programming/blob/master/kattis/yoda/yoda.cpp



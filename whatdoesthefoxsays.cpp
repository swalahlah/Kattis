#include <bits/stdc++.h>

using namespace std;

int main(){
	list <string> morse;
	int num;
	string input;
	string str;
	cin >> num;
	getline(cin,input);
	istringstream iss(input);
	while(iss >> str){
		morse.push_back(str);
	}
	while(num--){
		getline(cin, input);
		if(input == "what does the fox say?"){
			for(list<string>::iterator it = morse.begin();it!=--morse.end();++it){
				cout << *it << " ";
			}
			cout << *morse.end() << endl;
		}
		else{
			int index = input.find_last_of(" ");
			string temp = index.substr(index);
			morse.erase("temp");
		}
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	long long TC;
	cin >> TC;
	vector <long long> v;
	while(TC--){
		long long input;
		cin >> input;
		v.push_back(input);
	}
	long long temp,count = 0;
	for(long long i = 0; i < v.size() - 1 ; i++){
		for(long long j = 0; j < v.size() - i - 1; j++){
			if(v.at(j) > v.at(j+1)){
				temp = v.at(j+1);
				v.at(j+1) = v.at(j);
				v.at(j) = temp;
				++ count;
			}
		} 
	}
	cout << count << endl;
	return 0;
}

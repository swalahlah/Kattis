#include <bits/stdc++.h>

using namespace std;

int main(){
	stack <int> stk;
	long long TC, input;
	cin >> TC;
	while(TC--){
		cin >> input;
		if(stk.empty())
			stk.push(input);
		else{
			if((stk.top() + input) % 2 == 0)
				stk.pop();
			else
				stk.push(input);
		}
	}
	cout << stk.size() << endl;
	return 0;
}

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	int mod, m, input;
	int c, r, course, pass;
	vector <int> v;
	vector <int>::iterator itr;
	cin >> mod;

	while (mod != 0) {
		cin >> m;
		v.clear();
		if (v.empty())
		pass = 0;
		cout << pass;
		for (int i = 0; i < mod; i++) {
			cin >> input;
			v.push_back(input);
		}
		for (int j = 0; j < m; j++) {
			cin >> c; cin >> r;
			for (int k = 0; k < c; k++) {
				cin >> course;
				for (itr = v.begin(); itr != v.end(); itr++) {
					if (*itr == course) {
						--r;
						break;
					}
				}
				if (r == 0) {
					++pass;
				}
			}
		}
		if (pass >= m)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		cin >> mod;

	}
	return 0;
}



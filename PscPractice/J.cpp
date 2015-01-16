#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;

bool checkLine(string line, int num) {
	//for each token
	pch = strtok(a, " ");
	while(pch != NULL) {
		printf("token: %s ", pch);
		pch = strtok(a, " ");
	}
	cout << endl;
	return true;
}

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		int n, m;
		cin >> n >> m;
		//cout << "tc: " << tc << " n: " << n << " m: " << m << endl;
		vector<string> v;
		string ignore;
		getline(cin, ignore);
		cout << "ignore " << ignore << endl;
		for(int i = 0; i < m; i++) {
			string line;
			getline(cin, line);
			v.push_back(line);
		//	cout << "line: " << line << endl;
		}
		bool found = false;
		int num = pow(2, n);
		for(int i = 0; i < num; i++) {
			if(found)
				break;
			for(int j = 0; j < v.size(); j++) {
				if(!checkLine(v[j], i)) {
					break;
				}
				break;
			}
			break;
			found = true;
		}
		if(found)
			cout << "satisfiable" << endl;
		else
			cout << "unsatisfiable" << endl;
	}
	return 0;
}

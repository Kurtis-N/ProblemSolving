#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	long a, b;
	cin >> a >> b;
	if(b > a) {
		cout << "0" << endl;
	}
	else if(a == b) {
		cout << "infinity" << endl;
	}
	else {
		long ans = 0;
		long x = 1;
		while(x <= a) {
			if(a%x == b) {
				ans++;
			}
			x++;
		}
		cout << ans << endl;
	}
	return 0;
}

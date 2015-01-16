#include <stdio.h>
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

long long n, r, avg, s;
vector<long long> v;
vector<long long> b;

double calcAvg() {
	double avg = 0.0;
	for(long long i = 0; i < s; i++) {
		avg += v[i];
	}
	return avg/s;
}

long long incrementLowest() {
	long long low = -1;
	long long spot = -1;
	for(long long i = 0; i < s; i++) {
		if(v[i] == r)	{continue;}
		if(low == -1) {
			low = b[i];
			spot = i;
		}
		else if(b[i] < low) {
			low = b[i];
			spot = i;
		}
	//	cout << v[i] << " " << b[i] << endl;
	}
	v[spot]++;
	return b[spot];
}

void solve() {
	double currAvg = calcAvg();
	if(currAvg >= avg) {
		cout << "0" << endl;
		return;
	}
	long long numExams = 0;
	while(currAvg < avg) {
		numExams += incrementLowest();
		currAvg = calcAvg();
	//	cout << "currAvg: " << currAvg << endl;
	}
	cout << numExams << endl;
}

int main() {
	cin >> n >> r >> avg;
	for(long long i = 0; i < n; i++) {
		long long x;
		cin >> x;
		v.push_back(x);
		cin >> x;
		b.push_back(x);
	}
	s = v.size();
	solve();
	return 0;
}

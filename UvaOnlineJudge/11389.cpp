#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	//n bus drives / morning routes and afternoon routes
	//d - driver paid over time after first d hours
	//r - over time rate
	int n, d, r;
	cin >> n >> d >> r;
	while(n != 0 && r != 0 && d != 0)
	{
		vector<int> morning;
		vector<int> evening;
		int temp;
		for(int i = 0; i < n; i++)
		{
			cin >> temp;
			morning.push_back(temp);
		}
		for(int i = 0; i < n; i++)
		{
			cin >> temp;
			evening.push_back(temp);
		}
		sort(morning.begin(), morning.end());
		sort(evening.begin(), evening.end());
		int c1 = 0;
		int c2 = n-1;
		int otp = 0;
		for(; c1 < n; c1++)
		{
			int hours = morning[c1] + evening[c2];
			if(hours > d)
			{
				otp += (hours-d)*r;
			}
			c2--;
		}
		cout << otp << endl;
		cin >> n >> d >> r;
	}
	return 0;
}

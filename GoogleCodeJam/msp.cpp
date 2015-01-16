#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	int cn = 1;
	while(tc--)
	{
		int n;
		cin >> n;
		vector<int> v;
		vector<int> b;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			b.push_back(x);
		}
		int min = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			int sum = 0;
			for(int j = 0; j < n; j++)
			{
				sum += (v[(j+i)%n] * b[j]);
			}
			cout << sum << endl;
			if(sum < min)	{min = sum;}
		}
		cout << "Case #" << cn << ": " << min << endl;
		cn++;
	}
	return 0;
}

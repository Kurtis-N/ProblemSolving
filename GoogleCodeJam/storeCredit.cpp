#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)
int main()
{
	int tc;
	int cn = 1;
	cin >> tc;
	while(tc--)
	{
		int c, p;
		cin >> c; //credit, 5-1000
		cin >> p; //number of prices, 3-2000
		vector<int> prices;
		for(int i = 0; i < p; i++)
		{
			int x;
			cin >> x;
			prices.push_back(x);
		}
		bool found = false;
		cout << "Case #" << cn << ": ";
		for(int i = 0; i < p; i++)
		{
			if(found)	{break;}
			for(int j =0; j < p; j++)
			{
				//cout << prices[i] << " " << prices[j] << endl;
				if(j == i)	{continue;}
				if(prices[i] + prices[j] == c)
				{
					cout << (min(i, j)+1) << " " << (max(i, j)+1);
					found = true;
					break;
				}
			}
		}
		cout << endl;
		cn++;
	}
	return 0;
}

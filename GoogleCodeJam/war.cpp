#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
vector<double> naomi;
vector<double> ken;
int n;

int playWar()
{
	bool *used = new bool[n];
	//memset(used, sizeof(bool)*n, 0);
	for(int i = 0; i < n; i++)	{used[i] = false;}
	int wins = 0;
	for(int i = 0; i < n; i++)
	{
		double nval = naomi[i];
		bool found = false;
		for(int j = 0; j < n; j++)
		{
			if(used[j])	continue;
			if(ken[j] > naomi[i])
			{
				used[j] = true;
				found = true;
				//cout << "Ken using: " << ken[j] << " to beat " << nval << endl;
				break;
			}
		}
		if(!found)	
		{
			wins++;
			//take out lowest value of Kens
			for(int k = 0; k < n; k++)
			{
				if(used[k])	continue;
				else
				{
					//cout << "Naomi using: " << nval << " tobeat " << ken[k] << endl;
					used[k] = true;
					break;
				}
			}
		}
	}
	return wins;
}

int playDeceitfulWar()
{
	int wins;
	return wins;
}

int main()
{
	int tc;
	cin >> tc;
	for(int cn = 1; cn <= tc; cn++)
	{
		naomi.clear();
		ken.clear();
		cin >> n;

		for(int i = 0; i < n; i++)
		{
			double x;
			cin >> x;
			naomi.push_back(x);
		}

		for(int i = 0; i < n; i++)
		{
			double x;
			cin >> x;
			ken.push_back(x);
		}

		sort(naomi.begin(), naomi.end());
		sort(ken.begin(), ken.end());

		int y = playWar();
		//int z = playDeceitfulWar();

		cout << "Case #" << cn << ": " << y << " z" << endl;
	}
	return 0;
}

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
//position and radius
typedef pair<double, double> sprinkler;
double getRaduis(double l, double w, double pos, double rad)
{
	double x = (rad*rad) - (w*w);
	x = sqrt(x);
	x += pos;
	return x;
}
int main()
{
	//n = num of sprinklers, l = length, w = width
	double n, l, w;
	vector<sprinkler> v;
	while(cin >> n >> l >> w)
	{
		for(int i = 0; i < n; i++)
		{
			double pos, rad;
			cin >> pos >> rad;
			sprinkler temp;
			temp.first = pos;
			//find new legit raduis........................
			temp.second = getRaduis(l, w, pos, rad);
			//we don't want to include it if it is less than the required radius
			if(temp.second >= w/2)	{v.push_back(temp);}
		}
		//sorts by ->first by default..?
		sort(v.begin(), v.end());
		//for(int i = 0; i < n; i++)	{cout << v[i].first << " " <<  v[i].second << endl;}
		int num = 0;
		double currPos = 0;
		bool flag = false;
		while(currPos < l)
		{
			//find all sprinklers that overlap with that position, take one with largest radius
			sprinkler max;
			max.first = 0;
			max.second = 0;
			for(int i = 0; i < v.size(); i++)
			{
				sprinkler m = v[i];
				if(m.first+m.second >= currPos && m.first-m.second <= currPos)
				{
					//check if greater than max
					if(m.second > max.second)
					{
						max = m;
					}
				}
			}
			cout << "sprinkler: " << max.first << " " << max.second << endl;
			if(max.first == 0)	{flag = true; break;}
			currPos += max.second;
			num++;
			//if m is null, break;
			//erase that sprinkler
			//v.erase(v.begin()+spot);
		}
		if(flag)	{cout << -1 << endl;}
		else	{cout << num << endl;}
	}
	return 0;
}

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main()
{
	int cn = 1;
	int tc;
	cin >> tc;
	while(tc--)
	{
		vector<string> v;
		string line;
		int value;
		int m = 0;
		for(int i = 0; i < 10; i++)
		{
			cin >> line >> value;
			if(value > m)
			{
				v.clear();
				v.push_back(line);
				m = value;
			}
			else if(value == m)
			{
				v.push_back(line);
			}
		}
		cout << "Case #" << cn << ":"<<endl;
		for(int i = 0; i < v.size(); i++)	{cout<<v[i]<<endl;}
		cn++;
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int n, l;
map<string, int> m;
map<string, int>::iterator it;
map<string, int>::iterator it1;

int main()
{
	scanf("%d %d", &n, &l);
	while(n != 0 && l != 0)
	{
		int array[n][n];
		m.clear();
		int mapcount = 0;
		for(int i = 0; i < l; i++)
		{
			string str1;
			string str2;
			cin >> str1 >> str2;
			it = m.find(str1);
			it1 = m.find(str2);
			//found both
			if(it != m.end() && it1 != m.end())
			{
				//array[it][it1] = 1;
			}
			//found from
			else if(it != m.end() && it1 == m.end())
			{
				//array[it][mapcount] = 1;
				//m[it] = mapcount;
				mapcount++;
			}
			//found to
			else if(it == m.end() && it1 != m.end())
			{
				//array[mapcount][it1] = 1;
				//m[it] = mapcount;
				mapcount++;
			}
			//found neither
			else
			{
				int t = mapcount;
				//m[it] = mapcount;
				mapcount++;
				//array[t][mapcount] = 1;
				//m[mapcount] = it1;
			}
		}
		scanf("%d %d", &n, &l);
	}
	return 0;
}
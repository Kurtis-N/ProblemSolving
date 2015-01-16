//problem 11926
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main()
{
	//n is one-time tasks
	//m is repeating tasks
	int n, m;
	while(scanf("%d %d", &n, &m) != EOF)
	{
		if(n == 0 && m == 0)	{break;}
		int array[1000005];
		memset(array, 0, sizeof(array));
		bool flag = false;
		while(n--)
		{
			int start, end;
			scanf("%d %d", &start, &end);

			for(int i = start; i < end; i++)	
			{
				if(i > 1000000)	{break;}
				if(array[i] == 1)	{flag = true; break;}
				else {array[i]=1;}
			}
		}
		while(m--)
		{
			int start, end, inc;
			scanf("%d %d %d",&start, &end, &inc);
			//if(flag)	{break;}
			int i = start;
			while(i <= 1000000 && !flag)
			{
				for(i=start; i < end; i++)
				{
					if(i > 1000000)	{break;}
					if(array[i] == 1)	{flag = true; break;}
					else	{array[i] = 1;}
				}
				start += inc;
				end += inc;
				if(flag)	{break;}
			}
		}
		if(flag)	{cout << "CONFLICT\n";}
		else	{cout << "NO CONFLICT\n";}
	}
	return 0;
}

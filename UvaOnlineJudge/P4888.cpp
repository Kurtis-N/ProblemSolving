//P4888	Railroad DP

#include <stdio.h>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

int size1, size2, train1[1005], train2[1005], order[2005], dp[1005][1005];

int recurse(int one, int two)
{
	if(one > size1) return 0;
	if(two > size2) return 0;
	if(one == size1 && two == size2)	return 1;
		
	if(dp[one][two] != -1) return dp[one][two];

	if(order[one + two] == train1[one])
		if(recurse(one+1, two) == 1)
			return dp[one][two] = 1;
		
	if(order[one + two] == train2[two])	
		if(recurse(one, two+1) == 1)
			return dp[one][two] = 1;
	return dp[one][two] = 0;
}

int main()
{
	while(scanf("%d %d", &size1, &size2) && size1 != 0 && size2 != 0)
	{
		//printf("%d %d\n", size1, size2);
		for(int i = 0; i < size1; i++)	scanf("%d", &train1[i]);
		for(int i = 0; i < size2; i++)	scanf("%d", &train2[i]);
		for(int i = 0; i < (size1+size2); i++)	scanf("%d", &order[i]);
		 
		
		memset(dp,-1,sizeof(dp));
		if(recurse(0,0) == 0)
			printf("not possible\n");
		else
			printf("possible\n");
		/*for(int i = 0; i < (size1+size2); i++)
		{
			if(order[i] == 0)	break;
			printf("%d\n", order[i]);
		}*/
	}
	return 0;
} 

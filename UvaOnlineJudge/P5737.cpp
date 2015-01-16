//P5737 - Pills

#include <stdio.h>
#include <cstring>

long long numOfPills, numOfWays;
long long dp[31][63];	//w and h

long long recurse(long long w, long long h)
{
	if(w < 0 || h < 0)
		return 0;
	//printf("w:%lld h:%lld\n", w, h);
	if(dp[w][h] != -1)
	{
		//printf("returning: %lld\n", numOfWays+dp[w][h]);
		return dp[w][h];
	}
	if(w == 0 && h == 0) {
		return dp[w][h] = 1;
	}
	return dp[w][h] = recurse(w-1, h+1) + recurse(w, h-1);
}

int main()
{	
	memset(dp, -1, sizeof dp);	//initialize dp
	while(scanf("%lld", &numOfPills) && numOfPills != 0)
	{
		numOfWays = 0;
		printf("%lld\n", recurse(numOfPills, 0));
	}
	return 0;
}

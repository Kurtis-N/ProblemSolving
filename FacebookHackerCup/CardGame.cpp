#include <stdio.h>
#include <string>
#include <algorithm>

//using namespace std;

int numOfCases;
long long N, K;
long long dp[10000][10000];

long long choose(long long n, long long k)
{
	if(dp[n][k] != -1)	return dp[n][k];
	if(n < k)	return 0;
	if(n == 0)	return 0;
	if(k == 0)	return 1;
	if(n == k)	return 1;
	if(1 == k)	return n;
	else return (choose(n-1, k-1) + choose(n-1, k));	
}

int main()
{
	int caseNumber = 1;
	scanf("%d", &numOfCases);
	while(numOfCases--)
	{
		memset(dp, -1, sizeof dp);
		scanf("%lld %lld", &N, &K);
		long long array[N];
		for(long long i = 0; i < N; i++)	scanf("%lld", &array[i]);
		std::sort(array, array + sizeof(array)/sizeof(array[0]));
		//for(int i = 0; i < N; i++)	printf("%d ", array[i]);
		//printf("\n"); 
		long long num = choose(N, K);
		long long sum = 0;
		while(num--)
		{
			sum += choose(N-1, K-1);
		}
		printf("case #%d: %lld\n", caseNumber, sum);
		caseNumber++;
		return 0;
	}	
	return 0;
}

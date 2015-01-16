//100 - 3n+1 Problem
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>

//using namespace std;

int i, j, min, max;

int compute(int num);
int main()
{
	while(scanf("%d %d", &i, &j) != EOF)
	{
		min = std::min(i, j);
		max = std::max(i, j);
		printf("%d ", i);
		printf("%d ", j);
		int largest = min;
		int largestLength = compute(min);
		for(int n = min; n <= max; n++)
		{
			int temp = compute(n);
			if(temp > largestLength)
			{
				largestLength = std::max(compute(n), largestLength);
				
			}
		}
		printf("%d\n", largestLength);
	}
}

int compute(int num)
{
	int count = 1;
	while(num != 1)
	{
		if(num % 2 != 0)	//odd
		{
			count++;
			num = 3*num+1;
		}
		else		//even
		{
			count++;
			num = num/2;
		}
	}
	return count;
}

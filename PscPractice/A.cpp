#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

int main()
{
	int NC;
	int count = 1;
	scanf("%d", &NC);
	while(NC--)
	{
		int LCM, GCF;
		int a, b;
		scanf("%d %d", &a, &b);
		int i = 1;
		while(1)
		{
			if(i%a == 0 && i%b == 0)	{break;}
			i++;
		}
		LCM = i;

		GCF=std::min(a, b);
		int largerNum = std::max(a,b);
		int j = GCF;
		while(1)
		{
			if(GCF%j == 0 && largerNum%j == 0)	{break;}
			j--;
		}
		GCF = j;

		std::cout<<count<<" "<<LCM<<" "<<GCF<<std::endl;
		count++;
	}

	return 0;
}
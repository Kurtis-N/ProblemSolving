#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <vector>
#include <iostream>
#include <cstring>

bool palidrone(int lower)
{
	//test for palidrone
	std::vector<char> myvector;
	int value = lower;
        while(value > 9)
	{
		char toAdd;
		int temp = value % 10;
		toAdd = temp;
		//printf("value: %d\n", value);
		value = value/10;
		myvector.push_back(toAdd);
		//printf("adding: %d\n", toAdd);
	}
	myvector.push_back(value);
	//printf("adding: %d\n", value);
	int b = 0;
	int e = myvector.size()-1;
	//for(int i = 0; i < myvector.size(); i++)	printf("myvector %d: %d\n", i, myvector[i]);
	if(b == e)	return true;
	else
	{
		while((b != e) && ((b-e) != 1))
		{
			if(myvector[b] != myvector[e])
			{
				return false;
			}
			b++;
			e--;
		}
		return true;
	}
}
bool squareRoot(int lower)
{
	double result = sqrt(lower);
        if(result - ((int)result)==0)       
	{
		//printf("true! %f\n", result);
		return true;
	}
}

int main()
{
	int tc;
	int caseNum;
        caseNum = 1;
	scanf("%d", &tc);
	while(tc--)
	{
		int fs = 0;
                std::string lower;
                std::getline(std::cin, lower);
                std::string upper;
		std::getline(std::cin, upper);
                while(std::strcmp(lower, upper) != 0)
                {
                        bool square = squareRoot(lower);
                        bool fair = palidrone(lower);
			if(lower < 10)
			{
				square = false;
				fair = false;
				if(lower == 1 || lower == 4 || lower == 9)
				{
					square = true;
					fair = true;
				}
			}
                       	else
			{
				if(palidrone(lower) && squareRoot(lower))
				{
					int result = (int) sqrt(lower);
					if(palidrone(result)) fair == true;
					else	fair = false;
				}
			}
			if(fair && square)	
			{
				//printf("%d\n", lower);
				fs++;
			}
                        lower++;
                }
		printf("Case #%d: %d\n", caseNum, fs);
                caseNum++;
        }
}

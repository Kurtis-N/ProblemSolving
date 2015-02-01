/*
  Kurtis Niedling
  Facebook Hacker Cup
  Question 1: Beautiful Strings
*/

#include <stdio.h>
#include <ctype.h>
#include <string>
#include <iostream>

int array[200];

int getHighest()
{
	int max = 0;
	char ch;
	for(int i = 97; i < 122; i++)	max = std::max(max, array[i]);
	return max;
}

int main()
{
	int caseNumber = 1;	//case number
	int numOfCases;
	scanf("%d", &numOfCases);
	std::string noline;	//get rid of rest of line
	std::getline (std::cin, noline);
	while(numOfCases--)
	{
		memset(array, 0, sizeof array);
		char ch;
		int value = 0;
		std::string line;
		std::getline (std::cin, line);
	
		int place;
		place = 0;
		while(place < line.size())
		{	
			ch = line.at(place);
			if(ch >= 97 && ch <= 122)	//upper case letters
			{
				//printf("%d \n", ch);
				array[ch]++;
			}
			if(ch >= 65 && ch <= 90)	//lower case -- covert to upper case
			{
				//printf("%d \n", ch);
				ch = ch +32;
				array[ch]++;
			}
			place++;
		}
		int max = getHighest();		//get the first largest int (if 0 then no letters)
		int largestValue = 26;		//start at 26 and decrement
		do {
			max = 0;
			int placeHold;
			for(int i = 97; i <= 122; i++)	//get highest value
			{
				if(array[i] >= max)
				{
					max = array[i];
					placeHold = i;
				}
			}
			value += max*largestValue;
			array[placeHold] = 0;
			largestValue--;
		} while(max != 0);
		printf("Case #%d: %d\n", caseNumber, value);
		caseNumber++;
	}
	return 0;
}

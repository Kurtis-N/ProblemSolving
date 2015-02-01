#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

char alphabet [30];

char findLetter(char key)
{
	char ch;
	for(int i = 0; i < 26; i++)
	{
		if(alphabet[i] == key)	{printf("found at %d\n", i);ch = i+65; break;}
	}
	printf("%c -> %c \n",key,  ch);
	return ch;
}

int main()
{
	int TC;
	scanf("%d", &TC);
	std::string nothing;
	std::getline(std::cin, nothing);
	while(TC--)
	{
		std::string line1;
		std::string line2;
		std::getline(std::cin, line1);
		std::getline(std::cin, line2);

		
		for(int i = 0; i < 26; i++)	{alphabet[i] = line2[i];}

		for(int i = 0; i < line1.size(); i++)
		{
			printf("translating: %c\n", line1[i]);
			if(line1[i] == 32)	{std::cout << " ";}
			else
			{
				char ch = findLetter(line1[i]);
				ch = ch + 65;
				std::cout << ch;
			}
		}
		std::cout << std::endl;
		return 0;


		// std::cout << "line1: " << line1 << std::endl;
		// std::cout << "line2: " << line2 << std::endl;

	}
	return 0;
}
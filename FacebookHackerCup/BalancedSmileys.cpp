/*
  Facebook Hacker Cup
  Question 2: Balanced Smileys
  Kurtis Niedling
*/
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <iostream>
#include <stack>

int main()
{
	int numOfCases;
	int count = 1;
	scanf("%d", &numOfCases);
	std::string noline;
	std::getline (std::cin, noline);	//get rid of rest of first line
	while(numOfCases--)
	{
		std::stack<char> mystack;
		std::string line;
		std::getline(std::cin, line);
		int place = 0;
		char ch;
		bool flag = false;
		bool balancedPar = true;	//start with no par --> balanced
		bool smiley = true;
		if(line.size() == 0)	flag = true;	//empty string
		else
		{
			int size = line.size();
			while(place < line.size())
			{
				ch = line.at(place);
				//printf("ch: %c\n", ch);
				if( ch == ')')				
				{
					if(mystack.top() == '(')	mystack.pop();
				}
				else if( ch == '(')
				{
					mystack.push(ch);
				}
				else if( ch == ':')
				{
					if(!mystack.empty()) //smiley face
					{
						mystack.pop();
					}
					else	mystack.push(ch);
				}
				else	//check that is message
				{
					if((ch >= 97 && ch <= 122) || ch == 32 || ch == 58)	flag = true;
					else
					{
						flag = false;
						break;
					}
				}
				place++;
			}
		}
		if(flag && mystack.empty())		printf("Case #%d: YES\n", count);
		else		printf("Case #%d: NO\n", count);

		count++;
	}
}

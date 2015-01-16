#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

int main()
{
  std::string ignore;
  int TC;
  scanf("%d", &TC);
  std::getline(std::cin,ignore);
  while(TC--)
    {
      std::string line;
      std::getline(std::cin, line);
      std::vector<std::string> tokens;
      tokens = line.split(' ');
      std::reverse(std::tokens.begin(), std::tokens.end());
      printf("Case #%d:\n", TC);
      for(int i = 0; i < tokens.size()-1; i++)
	{
	  printf(" %d", tokens[i]);
	}
      printf("%d\n", tokens[tokens.size()]);
    }
  return 0;
}

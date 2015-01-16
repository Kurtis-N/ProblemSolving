#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string input;
	int count = 0;

	vector<string> code;
	vector<int> jumps;
	while(cin >> input)
	{
		if(input.compare("GOTO") == 0)
		{
			int x;
			scanf("%d", &x);
			jumps.push_back(x);
		}
		else
			jumps.push_back(-1);
		code.push_back(input);
	}

	bool visited [code.size()];
	memset(visited, false, sizeof(visited));
	for(int i = 0; i < code.size(); i++)
	{
		if(visited[i])
		{
			//cout << "already visited " << i << endl;
			break;
		}
		else
			visited[i] = true;

		//cout << "visiting " << i << endl;

		if(code[i].compare("NEXT") != 0)
		{
			i = jumps[i]-1;
			//cout << "jumping to " << i << endl;
			i--;
		}
	}
	for(int i = 0; i < code.size(); i++)
	{
		if(!visited[i])
			cout << (i+1) << endl;
	}

	return 0;
}

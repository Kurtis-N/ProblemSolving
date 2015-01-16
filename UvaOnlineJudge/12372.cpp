#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int TC;
	cin >> TC;
	int casenum = 1;
	while(TC--)
	{
		int L, W, H;
		cin >> L >> W >> H;
		if(L > 20 || W > 20 || H > 20)	{cout << "Case " << casenum << ": bad" << endl;}
		else	{cout << "Case " << casenum << ": good" << endl;}
		casenum++;
	}
	return 0;
}

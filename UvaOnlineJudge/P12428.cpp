#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		if (m < n)	{cout << m << endl;}
		else if(m == n)	{cout << n/m << endl;}
		else	{cout << m-n+1 << endl;}
	}
	return 0;
}

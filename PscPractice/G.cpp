#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int p;
	int cn = 1;
	while(cin >> p)
	{
		if(p < 0)	{break;}
		vector<int> x;
		vector<int> y;
		vector<int> m;
		
		for(int i = 0; i < p; i++)
		{
			int a,b,c;
			cin >> a >> b >> c;
			x.push_back(a);
			y.push_back(b);
			m.push_back(c);
		}
		double xc = 0;
		double yc = 0;
		double temp = 0;
		for(int i = 0; i < m.size(); i++)
		{
			yc += m[i]*x[i];
			temp += m[i];
		}
		yc /= temp;

		for(int i = 0; i < m.size(); i++)
		{
			xc += m[i]*y[i];
		}
		xc /= temp;
		printf("Case %d: %.2f %.2f\n", cn, yc, xc);			
		cn++;
	}
	return 0;
}

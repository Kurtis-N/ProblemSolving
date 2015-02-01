#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
#define max(a,b) (a>b? a : b)
//11834
int main()
{
	double w,h, r1,r2;
	cin >> w >> h >> r1 >> r2;
	while(w != 0 || h!=0 || r1 != 0 || r2 != 0)
	{
		double diag = sqrt((w*w)+(h*h));
		//check horizontal
		if((2*r1)+(2*r2) <= w && max(r1, r2) <= h)	{cout << "1S\n"; cin >> w >> h >> r1 >> r2; continue;}
		//check vert
		else if((2*r1)+(2*r2) <= h && max(r1, r2) <= w)	{cout << "2S\n";	cin >> w >> h >> r1 >> r2; continue;}
		//check diags
		//else if((2*r1)+(2*r2) <= diag)	{cout << "3S\n"; cin >> w >> h >> r1 >> r2; continue;}
		else	{cout << "N\n";}
		cin >> w >> h >> r1 >> r2;
	}
	return 0;
}

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main()
{
	string one, two;
	int cn = 1;
	while(cin >> one >> two)
	{
		if(one.compare("END")==0 && two.compare("END")==0)	{break;}
		int array1[26];
		int array2[26];
		memset(array1, 0, sizeof(array1));
		memset(array2, 0, sizeof(array2));
		for(int i = 0; i < one.length(); i++)
		{
			array1[one[i]-97]++;
		}
		for(int i = 0; i < two.length(); i++)
		{
			array2[two[i]-97]++;
		}
		bool flag = true;
		for(int i = 0; i < 26; i++)
		{
			if(array1[i] != array2[i])
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			cout << "Case "<<cn<<": same"<<endl;
		}
		else
		{
			cout << "Case "<<cn<<": different"<<endl;
		}
		cn++;
	}
	return 0;
}

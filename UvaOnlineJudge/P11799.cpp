//Sovled, problem 11799 - Horror Dash

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int numOfCases;
	cin >> numOfCases;
	cin.ignore();

	int count = 1;
	while(count <= numOfCases)
	{
		int max;
		scanf("%d", &max);
		int num;
		char next;
		while(scanf("%c", &next))
		{	
			if(next == '\n')
				break;
			scanf("%d", &num);
			//cout << "char: " << next << " ";
						
			if(num > max)
			{
				max = num;
				//cout << "new max: " << max << endl;
			}
		}
		//cout << endl;
 
		cout << "Case " << count << ": "<< max << endl;
		count++;
	}
}

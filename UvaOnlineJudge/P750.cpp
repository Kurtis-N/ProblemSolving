/*
To run from command line:
	first compile program > g++ P750.cpp
	run exectuable	> ./a.out
	enter values	> 1 1 1
	
Standard input of "1 1 1" would mean 1 test case, and the queen is placed at [1,1] on the chessboard.
	Link to problem:
	http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=691
	Run with input: 1 1 1
	And it will produce output:
	SOLN       COLUMN
	 #      1 2 3 4 5 6 7 8
	
	 1      1 5 8 6 3 7 2 4
	 2      1 6 8 3 7 4 2 5
	 3      1 7 4 6 8 2 5 3
	 4      1 7 5 8 2 4 6 3
*/

//Problem 750 - 8 Queens Chess Problem

#include <stdio.h>
#include <iostream> 
using namespace std;

int row[9], numOfCases, a, b, lineCounter;

void backtrack(int col);
bool place(int col, int tryrow);

int main()
{
	scanf("%d", &numOfCases);
	while(numOfCases--)
	{
		scanf("%d %d", &a, &b);
		lineCounter = 0;	//counter for screen prints
		memset(row, 0, sizeof row);
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		row[b] = a;

		backtrack(1);	//col 1
		if(numOfCases) printf("\n"); 	}
	return 0;
}	
void backtrack(int col)
{
	if(col == 9)
	{
		printf("%2d      %d", ++lineCounter, row[1]);
		for(int i = 2; i <= 8; i++)
		{
			printf( " %d", row[i]);
		}
		printf("\n");
		return;
	}
	if(col == b){
		backtrack(col+1);
		return;
	}
		
	for(int tryrow = 1; tryrow <= 8; tryrow++)
	{
		if(place(col, tryrow))
		{
			row[col] = tryrow;
			backtrack(col+1);	//try next column
		}
	}	
}

bool place(int col, int tryrow)
{
	for(int prev = 1; prev < col; prev++)
	{
		if(row[prev] == tryrow || (abs(row[prev] - tryrow) == abs(prev-col))) 
			return false;
	}
	if(row[b] == tryrow || (abs(row[b] - tryrow) == abs(b-col))) return false;
	return true;
}

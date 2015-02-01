//Problem 167 - The Sultan's Successors	--SOLVED

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int numOfBoards, finalboard[9][9], row[9], maxValue;
bool firsttime;
void backtrack(int col);
void printrow();
void printview();
int sum();

int sum()
{
	int s = 0;
	for(int i = 1; i < 9; i++)
	{
		s += finalboard[i][row[i]];
	}
	return s;
}

bool placement(int ro, int trycol)
{
	for(int r = 1; r < ro; r++)
	{
		if(row[r] == trycol)	return false;	//vert check
		if(abs(row[r] - trycol) == abs(ro-r))	return false;
	}
	return true;
}

void backtrack(int ro)
{
	if(ro == 9)
	{	
		//for(int i = 1; i < 9; i++)	printf("%d ", row[i]);
		//printf("\n");
		if(firsttime)
		{
			maxValue = sum();
			firsttime = false;
		}
		else	maxValue = std::max(maxValue,sum());	
		return;

	}
	for(int trycol = 1; trycol < 9; trycol++)
	{
		if(placement(ro, trycol))
		{
			row[ro] = trycol;
			backtrack(ro+1);
		}
	}
}

void printrow()
{
	for(int r = 1; r < 9; r++)	printf("%d ", row[r]);
	printf("\n");
}

int main()
{
	scanf("%d", &numOfBoards);
	while(numOfBoards--)
	{
		for(int i = 1; i < 9; i++)
		{
			for(int j = 1; j < 9; j++)
			{
				scanf("%d", &finalboard[i][j]);
			}
		}
		firsttime = true;		
		//memset(row, -1, sizeof row);
		backtrack(1);
		printf("%5d\n", maxValue);
	}
}

void printview()
{
	for(int i = 1; i < 9; i++)
	{
		for(int j = 1; j < 9; j++)
		{
			if(j == row[i])	printf("%d ", row[i]);
			else	printf("%d ", 0);
		}
		printf("\n");
	}
}

/**
* Done by:
* Student Name: Ivan Rudiy
* Student Group: 123
*Lab1.7
*/
#include <iostream>
#include <string>
static int nA = 10;
static int nB;
void main() 
{
	nB = 20;
	{
		static int nE = 5;
		int nC;
		int nA = 5;
		nC = ::nA*12;
		nE = nC + nB;
	}
	nA += 10;
	nB++;

	float fltK = 20;
	int nL = 0;

	for (int i = 0; i < 5; i++) 
	{
		static int nF = 0;
		nF++;
		int nS = 0;
		nS++;
		nL++;
	}
	char cA = '!';
	{
		char cA = '?';
		int nQ = 1;
		{
			char cA = '@';
			int nQ = 2;
			int nM = 6;
		
		}
		nQ = nQ + 5;
		nQ--;
	
	}
	for (int i = 0; i < 5;i=i+1)
	{
		static int iA = 0;
		int iB = 0;
		iA = iA + 1;
		iB = iB + 1;
	}
	int* pI;
	pI = new int;
	*pI = 25;
	delete pI;

	int* pW;
	pW = new int;
	*pW = 10;
	delete pW;

	return;
}
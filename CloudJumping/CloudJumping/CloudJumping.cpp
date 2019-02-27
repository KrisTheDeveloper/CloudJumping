// CloudJumping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int jumpingOnClouds(vector<int> c)
{
	int totalJumps = 0;
	int count = 0;
	for (vector<int>::const_iterator iter = c.begin(); iter != c.end(); iter++, count++)
	{
		int currentJump = *iter;

		if (currentJump == 1)
			continue;

		if ((iter + 1) != c.end() && (iter + 2) != c.end() && *(iter + 2) == 0)
		{
			totalJumps += 1;
			iter += 1;
			count += 1;
		}
		else if ((iter + 1) != c.end() && *(iter + 1) == 0)
			totalJumps += 1;

	}

	return totalJumps;
}

int main()
{
	//should be 28
	vector<int> testData = { 0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0 };
	//should be 3
	//vector<int> testData = { 0,0,0,1,0,0 };
	int answer = jumpingOnClouds(testData);
	return 0;
}



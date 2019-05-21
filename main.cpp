

#include <iostream>
#include<vector>
#include <iomanip>
using namespace std;

int main()
{
	int day = 0; // Day to be determined
	char answer;
	vector<vector<vector<vector<int>>>> dates(5);

	for (int i = 0; i < 5; i++)
		dates[i] = vector<int>(4);
		dates[0][0] = 1;
		dates[0][1] = 3;
		dates[0][2] = 5;
		dates[0][3] = 7;
		dates[1][0] = 9;
		dates[1][1] = 11;
		dates[1][2] = 13;
		dates[1][3] = 15;
		dates[2][0] = 17;
		dates[2][1] = 19;
		dates[2][2] = 21;
		dates[2][3] = 23;
		dates[3][0] = 25;
		dates[3][1] = 27;
		dates[3][2] = 29;
		dates[3][3] = 31;

	{
		{ { 1,  3,  5,  7 },
		{ 9, 11, 13, 15 },
		{ 17, 19, 21, 23 },
		{ 25, 27, 29, 31 } },
		{ { 2,  3,  6,  7 },
		{ 10, 11, 14, 15 },
		{ 18, 19, 22, 23 },
		{ 26, 27, 30, 31 } },
		{ { 4,  5,  6,  7 },
		{ 12, 13, 14, 15 },
		{ 20, 21, 22, 23 },
		{ 28, 29, 30, 31 } },
		{ { 8,  9, 10, 11 },
		{ 12, 13, 14, 15 },
		{ 24, 25, 26, 27 },
		{ 28, 29, 30, 31 } },
		{ { 16, 17, 18, 19 },
		{ 20, 21, 22, 23 },
		{ 24, 25, 26, 27 },
		{ 28, 29, 30, 31 } } };



	cout << "Your birthday is " << dates << endl;

	return 0;
}
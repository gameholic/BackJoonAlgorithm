//  https://www.acmicpc.net/problem/1463
// Make 1
#include <iostream>
using namespace std;
int main()
{
	int input=0;

	int result = 0;
	cin >> input;
	int count = 0;
	while (input > 1)
	{
		count++;
		result = input % 3;

		if (result == 0)
		{
			input = input / 3;
		}
		else
		{
			result = input % 2;
			if (result == 0)
			{
				input = input / 2;
			}
			else
				input = input - 1;
		}
		
	}
	cout << count;
	
}
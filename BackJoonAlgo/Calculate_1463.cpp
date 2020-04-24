#include "Calculate_1463.h"

int Calculate_1463::firstOption(int input)
{
	int count = 0;
	while (input>1)
	{
		if (input % 2 != 0 &&  input % 3 != 0)		//if input can't be divided by 2 or 3
		{
			input = input - 1;
		}
		else
		{
			if (input % 3 == 0)
			{
				input = input / 3;
			}
			else if (input % 2 == 0)
			{
				input = input / 2;
			}
		}
		count++;
	}
	cout << "Option1 count is " << count << endl;
	return count;
}
int Calculate_1463::SecondOption(int input)  //Divide with only 3 unless input is 2
{
	int count = 0;
	while (input > 2)
	{
		if (input % 3 != 0)		//if input can't be divided by 2 or 3
		{
			input = input - 1;
		}
		else
		{
			if (input % 3 == 0)
			{
				input = input / 3;
			}
		}
		count++;
	}
	if (input == 2)
	{
		input = input - 1;
		count++;
	}
	cout << "Option2 count is " << count << endl;
	return count;
}
int main()
{
	Calculate_1463 calculate;
	srand(time(NULL));
	int x = rand() % 10000;

	cout << "Generated random number is "<<x<<endl;
	int optionA = calculate.firstOption(x);
	int optionB = calculate.SecondOption(x);
	if (optionA < optionB)
		cout << "Shortest way is " << optionA << endl;
	else
		cout << "Shortest way is " << optionB << endl;


}
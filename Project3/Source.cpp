//test scores that can't be below zero and no higher than 100
#include <iostream>
using namespace std;

int main()
{
	const int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60,
		MIN_SCORE = 0,
		MAX_SCORE = 100;

	int testScore;

	cout << "Enter your numeric test score and I will\n"
		<< "tell you the letter grade you earned: ";
	cin >> testScore;

	if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
	{
		if (testScore >= A_SCORE)
			cout << "Your grade is an A.\n";
		else if (testScore >= B_SCORE)
			cout << "Your grade is a B.\n";
		else if (testScore >= C_SCORE)
			cout << "Your grade is a C.\n";
		else if (testScore >= D_SCORE)
			cout << "Your grade is a D.\n";
		else
			cout << "Your grade is a F.\n";
	}
	else
	{
		cout << "That is an invalid score. Run the program\n"
			<< "again and enter a value in the range of\n"
			<< MIN_SCORE << "through" << MAX_SCORE << ".\n";
	}

	system("pause");

	return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;

double Average(int* student, int people)
{
	double total = 0;

	for (int i = 0; i < people; ++i)
	{
		cout << i + 1 << "人目を入力してください > " << flush;
		cin >> *(student + i);

		total += *(student + i);
	}

	return total / people;
}

int main()
{
	int people;
	cout << "何名入力しますか？ > " << flush;
	cin >> people;

	int* student = new int[people];

	cout << "平均点は" << Average(student, people) << "点です。" << endl;

	if (student != NULL)
	{
		for (int i = 0; i < people; ++i)
		{
			*(student + i) = 0;
			cout << *(student + i) << flush;
		}
		delete[] student;
	}
		
}

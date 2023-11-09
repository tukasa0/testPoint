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
	
	if (student == NULL)
	{
		*student = 0;
		cout << *student << endl;

		delete[] student;
	}

	cout << "平均点は" << Average(student, people) << "点です。" << endl;

	delete[] student;
		
}

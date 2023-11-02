#include <iostream>
#include <cstdio>
using namespace std;

void Average(int* student, int people)
{
	double total = 0;

	for (int i = 0; i < people; ++i)
	{
		cout << i + 1 << "人目を入力してください > " << flush;
		cin >> *(student + i);

		total += *(student + i);
	}
	
	printf("平均点は%.1f点です。", total / people);
}

int main()
{
	int people;
	cout << "何名入力しますか？ > " << flush;
	cin >> people;

	int* student = new int[people];
	
	Average(student, people);
		
}

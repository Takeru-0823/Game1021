#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void kazuateMain()
{
	srand((unsigned int)time(NULL));

	int answer = 0;
	int input = 0;

	answer = rand() % 10 + 1;

	while (true)
	{
		do
		{
			cout << "1�`10�̐�����͂��Ă������� > " << flush;
			cin >> input;

		} while (input < 1 || input > 10);

		if (input == answer)
		{
			cout << "�����I" << endl;
			break;
		}
		else if (input < answer)
		{
			cout << "���͂��ꂽ�������傫���ł�" << endl;
		}
		else
		{
			cout << "���͂��ꂽ�������������ł�" << endl;
		}

	}
	cout << endl;
}
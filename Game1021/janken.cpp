#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static void showHand(int hand, bool player = true);
static const char* getCompareString(int hand, int oppHand, bool& drawCheck);

void jankenMain()
{
	while (true)
	{
		srand((unsigned int)time(NULL));

		int hand = 0;
		int oppHand = 0;
		bool drawCheck = false;

		do
		{
			cout << "�����o���܂���" << endl
				<< "�O�[:0, �`���L:1, �p�[:2" << flush;
			cin >> hand;

		} while (hand < 0 || hand > 2);

		showHand(hand);

		oppHand = rand() % 3;
		showHand(oppHand, false);

		cout << getCompareString(hand, oppHand, drawCheck) << endl;

		cout << endl;

		if (drawCheck == true)
		{
			continue;
		}
		else
		{
			break;
		}

	}
}

static void showHand(int hand, bool player)
{
	const char* str[] =
	{
		"�O�[",
		"�`���L",
		"�p�["
	};

	if (player == true)
	{
		cout << "���Ȃ� : ";
	}
	else
	{
		cout << "���� : ";
	}

	cout << str[hand] << endl;
}

static const char* getCompareString(int hand, int oppHand, bool& drawCheck)
{
	static const char* const str[] =
	{
		"���Ȃ��̏���",
		"����̏���",
		"������"
	};

	if (hand == 0 && oppHand == 1 || hand == 1 && oppHand == 2 || hand == 2 && oppHand == 0)
	{
		return str[0];
	}
	else if (hand == oppHand)
	{
		drawCheck = true;
		return str[2];
	}
	else
	{
		return str[1];
	}

}


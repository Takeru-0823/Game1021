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
		cout << "”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > " << flush;
		cin >> input;

		if (input == answer)
		{
			cout << "³‰ðI" << endl;
			break;
		}
		else if (input < answer)
		{
			cout << "“ü—Í‚³‚ê‚½”‚æ‚è‚à‘å‚«‚¢‚Å‚·" << endl;
		}
		else
		{
			cout << "“ü—Í‚³‚ê‚½”‚æ‚è‚à¬‚³‚¢‚Å‚·" << endl;
		}

	}
	cout << endl;
}
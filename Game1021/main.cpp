#include <iostream>
#include "janken.h"
#include "kazuate.h"
using namespace std;

int main()
{
    int choice = 0;

    while (true)
    {
        do
        {
            cout << "ゲームを選択してください" << endl;
            cout << "１：じゃんけんゲーム、２：数当てゲーム　３ : 終了" << flush;
            cin >> choice;
        } while (choice < 1 || choice > 3);

        if (choice == 1)
        {
            jankenMain();
        }
        else if (choice == 2)
        {
            kazuateMain();
        }
        else
        {
            break;
        }
    }

}



#include <iostream>
using namespace std;

void drawBoard(int entriesCout, int *entries)
{

    for (int i = 0; i < entriesCout; i++)
    {
        if ((i + 1) % 4 == 0)
        {
            cout << " * " << endl;
        }
        else
        {
            cout << " * ";
        }
    }
}

int main()
{

    cout << "Tic Tac Toe For Terminal" << endl;

      for (int i = 0; i < 16; i++)
    {
        if ((i + 1) % 4 == 0)
        {
            cout <<i+1<<endl;
        }
        else
        {
            cout<<i+1;
        }
    }

    char playerChar[3];

    // 4X4 Tic Tac Toe
    int entriesCount = 16;
    int entries[entriesCount];
    for (int i = 0; i < entriesCount; i++)
    {
        entries[i] = 0;
    }

    // Draw Board
    drawBoard(entriesCount, entries);

    return 0;
}
#include <iostream>
#include "gol.h"
using namespace std;

void golPrint(int **xy)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << xy[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
#include <iostream>
#include "gol.h"
using namespace std;

int main()
{
    cout << "Welcome to the Game of Life!\n";

    int **xy = new int *[m];
    int **dxy = new int *[m];

    for (int i = 0; i < m; i++)
    {
        xy[i] = new int[m];
        dxy[i] = new int[m];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            xy[i][j] = 0;
            dxy[i][j] = 0;
        }
    }

    // you can adjust the starting position of the living cells
    xy[2][4] = 1;
    xy[3][5] = 1;
    xy[4][3] = 1;
    xy[4][4] = 1;
    xy[4][5] = 1;

    golPrint(xy);

    for (int i = 0; i < step; i++)
    {
        golCheck(xy, dxy);
        golSync(xy, dxy);
        golPrint(xy);
    }

    for (int i = 0; i < m; i++)
    {
        delete[] xy[i];
        delete[] dxy[i];
    }
    delete[] xy;
    delete[] dxy;

    return 0;
}
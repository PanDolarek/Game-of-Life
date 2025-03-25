#include <iostream>
#include "gol.h"
using namespace std;

void golCheck(int **xy, int **dxy)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ngh = 0; // alive neighbors
            for (int checki = -1; checki <= 1; checki++)
            {
                for (int checkj = -1; checkj <= 1; checkj++)
                {
                    if (checki == 0 && checkj == 0)
                    {
                        continue;
                    }

                    int nghi = i + checki;
                    int nghj = j + checkj;

                    if (nghi >= 0 && nghi < m && nghj >= 0 && nghj < m)
                    {
                        ngh += xy[nghi][nghj];
                    }
                }
            }
            if (xy[i][j] == 1)
            {
                if (ngh == 2 || ngh == 3)
                {
                    dxy[i][j] = 1;
                }
                else
                {
                    dxy[i][j] = 0;
                }
            }
            if (xy[i][j] == 0)
            {
                if (ngh == 3)
                {
                    dxy[i][j] = 1;
                }
                else
                {
                    dxy[i][j] = 0;
                }
            }
        }
    }
}

void golSync(int **xy, int **dxy)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            xy[i][j] = dxy[i][j];
        }
    }
}
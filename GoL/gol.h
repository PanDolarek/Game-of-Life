#ifndef GOL_H
#define GOL_H

const int m = 9;     // number of rows and colls
const int step = 10; // number of the following steps of the program

void golInitialize(int **xy, int **dxy);
void golPrint(int **xy);
void golCheck(int **xy, int **dxy);
void golSync(int **xy, int **dxy);

#endif
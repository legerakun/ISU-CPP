#include <iostream>

using namespace std;

int main()
{
    int i, j;
    double f = 1./32767 * 5;

    srand(3);

    int **a = new int* [3];

    for (i = 0; i < 3; i++){
        a[i] = new int [3];
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            a[i][j] = rand() * f + 5;
        }
    }

    a[2][0] = (a[0][1] * a[1][2]) - (a[1][1] * a[0][2]);
    a[2][1] = (a[0][0] * a[1][2]) - (a[1][0] * a[0][2]);
    a[2][2] = (a[0][0] * a[1][1]) - (a[1][0] * a[0][1]);

    for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 3; j++){
            printf(" %d", a[i][j]);
        }
    }

    printf("\n\nData deleted\n");

    for (i = 0; i < 3; i++){
        delete [] a[i];
        delete [] a;
    }

    for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 3; j++){
            printf(" %d", a[i][j]);
        }
    }

    return 0;

    return 0;
}

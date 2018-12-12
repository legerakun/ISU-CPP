#include <iostream>

using namespace std;

int secondary(int n)
{
    int i;

    printf("\n\nInput n = %d\n", n);

    int *a = new int[n];

    for (i = 0; i < n; i++) {
        *(a + i) = rand();
        printf("\n%d", *(a + i));
    }

    delete []a;

    printf("\n\nData deleted \n");

    for (i = 0; i < n; i++) {
        printf("\n%d", *(a + i));
    }

    return 0;
}

int main()
{
    int n, i;

    srand(3);

    printf("Input n = ");
    scanf("%d", &n);

    int *d = new int[n];

    for (i = 0; i < n; i++) {
        d[i] = rand();
        printf("\n%d", d[i]);
    }

    delete []d;

    printf("\n\nData deleted \n");

    for (i = 0; i < n; i++) {
        printf("\n%d", d[i]);
    }

    secondary(n);

    return 0;
}

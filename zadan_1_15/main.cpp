#include <iostream>
#include <math.h>

using namespace std;

struct TREUGOL {
    double a[2], b[2], c[2], p;
};

int main()
{
    int i, q = 1;
    double la = 0, lb = 0, lc = 0, laa = 0, lbb = 0, lcc = 0, lab = 0, lba = 0, lca = 0;
    TREUGOL n;
    cout << "Input a(X,Y): ";

    int *a = new int [q];
    int *b = new int [q];
    int *c = new int [q];

    for(int i = 0; i < q; i++){
        cin >> n.a[0];
        cin >> n.a[1];
    }

    cout << "Input b(X,Y): ";

    for(int i = 0; i < q; i++){
        cin >> n.b[0];
        cin >> n.b[1];
    }

    cout << "Input c(X,Y): ";

    for(int i = 0; i < q; i++){
        cin >> n.c[0];
        cin >> n.c[1];
    }

    cout << "a(" << n.a[0] << ";" << n.a[1] << ")\n";
    cout << "b(" << n.b[0] << ";" << n.b[1] << ")\n";
    cout << "c(" << n.c[0] << ";" << n.c[1] << ")\n";

    laa = (n.b[0] - n.a[0]); lab = (n.b[1] - n.a[1]);
    lbb = (n.c[0] - n.a[0]); lba = (n.c[1] - n.a[1]);
    lcc = (n.c[0] - n.b[0]); lca = (n.c[1] - n.b[1]);

    la = sqrt(pow(laa, 2) + pow(lab, 2));
    lb = sqrt(pow(lbb, 2) + pow(lba, 2));
    lc = sqrt(pow(lcc, 2) + pow(lca, 2));

    n.p = la + lb + lc;
    cout << "P = " << n.p;

    return 0;
}

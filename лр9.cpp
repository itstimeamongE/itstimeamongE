

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n % 60 << "\n";


    int k2;
    cin >> k2;
    cout << k2 % 7 << "\n";


    int k3, n3;
    cin >> k3 >> n3;
    int nd = (k3 + n3 - 1) % 7;
    if (nd%7==0){
        nd = 7;
    }
    cout << nd << "\n";


    int a, b, c;
    cin >> a >> b >> c;
    int kol, pl, ksh, kdl;
    if (a, b >= c) {
        ksh = min(a, b) / c;
        kdl = max(a, b) / c;
        kol = kdl * ksh;
        pl = a * b - c * c * kol;
        cout << kol << ", " << pl << "\n";
    }
    else {
        kol = 0;
        pl = a * b;
        cout << kol << ", " << pl << "\n";
    }


    int ngoda;
    cin >> ngoda;
    int nst;
    if (ngoda % 100 == 0) {
        nst = ngoda / 100;
        cout << nst;
    }
    else {
        nst = ngoda / 100 + 1;
        cout << nst;
    }

}


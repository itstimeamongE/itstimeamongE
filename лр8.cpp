

#include <iostream>

using namespace std;
int main()
{
    
    float razm;
    cin >> razm;
    int kb = razm / 1024;
    cout << kb << "\n";


    int a2, b2;
    cin >> a2 >> b2;
    int kol2 = a2 / b2;
    cout << kol2 << "\n";


    int a3, b3;
    cin >> a3 >> b3;
    int kol3 = a3 / b3;
    int dlnez = a3 - b3 * kol3;
    cout << dlnez << "\n";


    int chislo4;
    cin >> chislo4;
    int ed4 = chislo4 % 10;
    int des4 = chislo4 / 10;
    cout << ed4 << des4 << "\n";
    

    int chislo5;
    cin >> chislo5;
    int ed5 = chislo5 % 10;
    int sot5 = chislo5 / 100;
    int des5 = chislo5 / 10 % 10;
    cout << des5 << ed5 << sot5;

}


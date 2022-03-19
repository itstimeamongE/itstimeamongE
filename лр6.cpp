#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	string a0 = a;
	string b0 = b;
	a = b0;
	b = a0;
	cout << a <<", "<< b << "\n";


	string a1, b1, c1;
	cin >> a1 >> b1 >> c1;
	string a10 = a1;
	string b10 = b1;
	string c10 = c1;
	b1 = a10;
	a1 = c10;
	c1 = b10;
	cout << a1 << ", " << b1 << ", " << c1 << "\n";
	

	string a2, b2, c2;
	cin >> a2 >> b2 >> c2;
	string a20 = a2;
	string b20 = b2;
	string c20 = c2;
	a2 = b20;
	b2 = c20;
	c2 = a20;
	cout << a2 << ", " << b2 << ", " << c2 << "\n";


	float x;
	cin >> x;
	float y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << y << "\n";


	float x1;
	cin >> x1;
	float y1 = 4 * pow(x1-3, 6) - 7 * pow(x1-3, 3) + 2;
	cout << y1 << "\n";


	float a4;
	cin >> a4;
	float a24 = a4 * a4;
	float a84 = a24 * a24 * a24;
	cout << a84 << "\n";


	float a5;
	cin >> a5;
	float a35 = a5 * a5 * a5;
	float a155 = a35 * a35 * a35 * a35 * a35;
	cout << a155;

}


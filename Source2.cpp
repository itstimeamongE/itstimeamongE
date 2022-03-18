#include <iostream>
using namespace std;

int main(){
	float x1, y1, x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	float r = ((x2 - x1) * *2 + (y2 - y1) * *2) * *0.5;
	cout << r << "\n";


	float a1, b1, c1;
	cin a1 >> b1 >> c1;
	float ac1 = abs(c1 - a1);
	float bc1 = abs(c1 - b1);
	float summ = ac1 + bc1;
	cout << ac1 << ", " << bc1 << ", " << summ << "\n";


	float a2, b2, c2;
	cin a2 >> b2 >> c2;
	float ac2 = c2 - a2;
	float bc2 = b2 - c2;
	float pr = ac * bc;
	cout << pr << "\n";


	float x11, y11, x12, y12;
	cin >> x11, y11, x12, y12;
	float dl = abs(x12 - x11);
	float sh = abs(y12 - y11);
	float per = (dl + sh) * 2;
	float pl = dl * sh;
	cout << per << ", " << pl << "\n";


	float x21, y21, x22, y22, x23, y23;
	cin x21 >> y21 >> x22 >> y22 >> x23 >> y23;
	float st1 = ((x22 - x21) * *2 + (y22 - y21) * *2) * *0.5;
	float st2 = ((x23 - x21) * *2 + (y23 - y21) * *2) * *0.5;
	float st3 = ((x23 - x21) * *2 + (y23 - y21) * *2) * *0.5;
	float per1 = st1 + st2 + st3;
	float pp = per1 / 2;
	float pl1=(pp * (pp - st1) * (pp - st2) * (pp - st3))** 0.5;
	cout << per1 << ", " << pl1;

	return 0;
}
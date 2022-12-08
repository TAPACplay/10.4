
#include <iostream>

using namespace std;

int main()

{
	double y, x, ct;
	setlocale(0, ".1251");
	int a = 8.8;
	int t;
	int c;
	cout << "Згачення змінної t \n";
	cin >> t;
	c= t*t + (sqrt (a));
	x = log10(abs(c * t));
	y = sin(3 * x) + cos(2 * x);
	cout << "y = " << y;
	
	

}

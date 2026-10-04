#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -6 - R)
			y = 0;
		if (x <= -6 && x > -6 - R)
			y = -sqrt(pow(R, 2) - pow((x + 6), 2));
		if (x <= 0 && x > -6)
			y = sqrt(pow(R, 2) - pow(x, 2));
		if (x <= 3 && x > 0)
			y = (2 * R * x) / 3;
		if (x > 3)
			y = R * (x - 3) / 6;				

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, y, R, xp, xk, dx;
	cout << " xp = "; cin >> xp;
	cout << " xk = "; cin >> xk;
	cout << " dx = "; cin >> dx;
	cout << " R = "; cin >> R;
	cout << fixed;
	cout << "--------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "--------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= 0) {
			y = -(x / 2);
		}
		else if (0 < x && x <= R) {
			y = R - sqrt(R * R - x * x);
		}
		else if (R < x && x <= 2 * R) {
			y = sqrt(R * R - (x - R) * (x - R));
		}
		else {
			y = -(x - 2 * R) / (6 - 2 * R);
		}

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "--------------------------" << endl;
	return 0;
}
#include "logic.h"

int main() {
	int a, b, c;

	cout << "input a, b, c: ";
	cin >> a >> b >> c;

	cout << "before: a = " << a << ", b = " << b << ", c = " << c << endl;

	sort(a, b, c);

	cout << "after: a = " << a << ", b = " << b << ", c = " << c << endl;

	return 0;
}
/* Demonstration of class with invariant, rules for valid value.
In this code, invariant is defined at is_valid() */

#include <iostream>

using namespace std;

class Date {
private:
	int year, month, day;
	bool is_valid(int y, int m, int d);

public:
	Date(int y, int m, int d);
	class Invalid {};
};

bool Date::is_valid(int y, int m, int d) {
	if (y < 1 || m < 1 || m > 12 || d < 1 || d > 31)
	{
		return false;
	}
	return true;
}

Date::Date(int y, int m, int d)
{
	if (!is_valid(y, m, d)) {
		throw Invalid();
	}
}


int main() {
	try {
		Date birthday{ 2002, 123230, 8 };
		cout << "Valid Date" << endl;
	}
	catch (Date::Invalid) {
		cout << "Invalid Date" << endl;
	}
}

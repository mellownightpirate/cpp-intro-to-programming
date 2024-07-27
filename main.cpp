#include <iostream>
using namespace std;

void Log() {
	int x{ 42 };
	cout << "x is " << x;
	return x;
}

int main() {
	int x = Log();
	cout << "\nit's definitely " << x;
}
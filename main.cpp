#include <iostream>
using namespace std;

int Day{ 3 };

int main() {
	switch (Day) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	default:
		cout << "Something else";
	}
}
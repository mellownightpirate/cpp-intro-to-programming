#include <iostream>
using namespace std;

int Day{ 7 };

int main() {
	switch (Day) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 6:
	case 7:
		cout << "Wednesday";
	}
}
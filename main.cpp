#include <iostream>
using namespace std;

int main() {
	int Number{ 1 };
	do {
		cout << Number << ", ";
		++Number;
	} while (Number <= 10);
}
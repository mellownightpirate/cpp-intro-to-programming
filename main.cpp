#include <iostream>
using namespace std;

int CalculateLevel() {
	return 5;
};

int main() {
	cout << "Level: " << CalculateLevel();
	cout << "\nHealth: " << CalculateLevel() * 5;
	return 5;
}
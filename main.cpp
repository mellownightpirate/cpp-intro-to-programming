#include <iostream>
using namespace std;

int CalculateLevel() {
	return 5;
};

int main() {
	int Level{ CalculateLevel() };
	cout << "Level: " << Level;
}
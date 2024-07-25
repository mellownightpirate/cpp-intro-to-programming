#include <iostream>
using namespace std;

int Health{ 150 };

void TakeDamage(int Damage) {
	cout << "Inflicting " << Damage << " Damage";
	Health -= Damage;
	cout << " - Health: " << Health << '\n';
}

int main() {
	TakeDamage(20);
	TakeDamage(50);
	TakeDamage(70);
}
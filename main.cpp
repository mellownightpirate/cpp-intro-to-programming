#include <iostream>
using namespace std;

int Health{ 150 };

void TakeDamage(
	int Damage, bool isMagical = false
) {
	cout << "Inflicting " << Damage << " Damage";
	// Magical damage is doubled
	Health -= isMagical ? Damage * 2 : Damage;
	cout << " - Health: " << Health << '\n';
}

int main() {
	TakeDamage(10, true);
	TakeDamage(50);
	TakeDamage(70);
}
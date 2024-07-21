#include <iostream>
using namespace std;

int Health{ 150 };
bool isDead{ false };

void TakeDamage() {
	cout << "Taking Damage";
	Health -= 150;
	isDead = true;
}

int main() {
	TakeDamage();
}
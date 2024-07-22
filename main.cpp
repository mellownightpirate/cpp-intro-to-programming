#include <iostream>
using namespace std;

int Health{ 150 };
bool isDead{ false };
bool hasLoot{ true };
int Exp{ 500 };
bool canHeal{ true };
bool shouldAwardExperience{ true };
bool canSeePlayer{ true };
bool isHostile{ false };

void DropLoot() {
	hasLoot = false;
	cout << "You lost all of your loot.\n";
}

void RunAway() {
	cout << "Run!!.";
}

void Attack() {
	cout << "Attack!!";
}

void AwardExperience() {
	cout << "Just gained " << 50 << " EXP.\n";
	Exp += 50;
	cout << "Total EXP " << Exp;
}

void CastHealingSpell() {
	cout << "Drank 'Elixir of Life'!\n";
	Health += 50;
	cout << "Your health just improved by " << Health << " points.";
}

void PatrolArea() {
	cout << "On the lookout!";
}

void TakeDamage() {
	if (Health <= 0) {
		isDead = true;
		if (hasLoot) {
			DropLoot();
		}
		if (shouldAwardExperience) {
			AwardExperience();
		}
	}
	else if (Health <= 50) {
		canHeal ? CastHealingSpell() : RunAway();
	}
	else if (isHostile) {
		canSeePlayer ? Attack() : PatrolArea();
	}
	else {
		cout << "Taking damage but not in critical condition or hostile.\n";
	}
}

int main() {
	Health -= 150;
	TakeDamage();
}
#include <iostream>
using namespace std;

// generate a programme that iterates 1 throught to 100,
// but outputs fizz for every iteration divisible by three instead of the number,
// buzz for every iteration divisble by five instead of the number,
// fizzbuzz for every iteration divisble by 15 instead of the number.


int main() {

	int Number{ 0 };

	for (int i{ 1 }; i <= 100; i++) {
		++Number;
		if (Number % 3 == 0) {
			cout << "Fizz, ";
		} if (Number % 5 == 0) {
			cout << "Buzz, ";
		} if (Number % 15 == 0) {
			cout << "FizzBuzz, ";
		} if (Number == 100) {
			cout << " FizzBuzz.";
		}
		else cout << Number << ", ";
	};

}
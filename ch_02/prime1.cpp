#include <iostream>
#include <cmath>
using namespace std;

int main () {
	cout << "Enter a number and press ENTER: \n";
	int n;
	cin >> n;

	bool isPrime = true;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0) {
			isPrime = false;
			break;
		}
	}
	
	if (isPrime) {
		cout << n << " is prime\n";
	} else {
		cout << n << "is not prime\n";
	}

	return 0;
}

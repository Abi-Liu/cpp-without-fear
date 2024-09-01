#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number to start\n";
  cin >> n;

  while (true) {
    if (n % 3 == 0) {
      cout << "I am subtracting 1\n";
      n--;
    } else {
      cout << "I am subtracting " << n % 3 << endl;
      n -= n % 3;
    }

    cout << "New total is " << n << endl;

    if (n <= 0) {
      cout << "I win!";
      break;
    }

    int choice = 0;
    while (choice != 1 && choice != 2) {
      cout << "Select either 1 or 2\n";
      cin >> choice;
    }

    n -= choice;
    cout << "New total is " << n << endl;

    if (n <= 0) {
      cout << "You win!";
      break;
    }
  }

  return 0;
}

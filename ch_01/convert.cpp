#include "iostream"
using namespace std;

int main () {
  double ctemp;
  cout << "Enter the temperature in Celsius\n";
  cin >> ctemp;

  double ftemp = ctemp * 1.8 + 32;
  cout << "Fareinheit temp is: " << ftemp;

}

#include <iostream>
using namespace std;

int main() {
  double first, last;
  
  cout << "------------------------------------------------------\n";
  cout << "Welcome to the calculator\nEnter the first variable:\n";
  cin >> first;
  cout << "Enter the second variable:\n";
  cin >> last;
  cout << "The sum is " << first + last << "!";
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int first;
  int last;
  string type;
  
  cout << "------------------------------------------------------\n";
  cout << "Welcome to the calculator\nEnter the first variable:\n";
  cin >> first;
  cout << "Enter the second variable:\n";
  cin >> last;
  cout << "Enter the math type e.g. plus, minus, times, divide:\n";
  cin >> type;
  if (type == "plus") {
    cout << "The sum is " << first + last << "!";
  } else if (type == "minus") {
    cout << "The sum is " << first - last << "!";
  } else if (type == "times") {
    cout << "The sum is " << first * last << "!";
  } else if (type == "divide") {
    cout << "The sum is " << first / last << "!";
  } else {
    cout << "That isn't a valid math type!";
  }
  
  return 0;
}

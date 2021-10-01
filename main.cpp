#include <iostream>

using namespace std;

char getOperation() {
  char operation;

  cout << "Choose your operation (+, -, /, *): \n";
  cin >> operation;

  if (operation != '+' && operation != '-' && operation != '/' && operation != '*') {
    cout << "Hey, you didnt type valid operation \n";

    return 1;
  }

  return operation;
}

int main() {
  char operation;

  operation = getOperation();

  cout << "Choose your two numbers \n";
  cout << "Number 1: \n";
  double number1; cin >> number1;
  cout << "Number 2: \n";
  double number2; cin >> number2;

  double result;
  switch (operation) {
    case '+':
      result = number1 + number2;
      break;

    case '-':
      result = number1 - number2;
      break;

    case '/':
      result = number1 / number2;
      break;

    case '*':
      result = number1 * number2;
      break;
  }

  cout << "The result of '" << number1 << " " << operation << " " << number2 << "' is " << result << " \n";

  // Debug
  cout << "Debug info: \n";
  cout << operation;
  cout << number1;
  cout << number2;

  return 0;
}

#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    result = num1 * num2;
    cout << "Product of " << num1 << " and " << num2 << " is " << result << endl;
    return 0;
}
#include <iostream>

int main() {
    int num1 = 20;
    int num2 = 10;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout << "After swapping, num1 = " << num1 << " and num2 = " << num2 << std::endl;
    return 0;
}
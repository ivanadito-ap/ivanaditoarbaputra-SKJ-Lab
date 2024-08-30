#include <iostream>
using namespace std;

int add_num(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Result: " << add_num(num1, num2) << endl;
}

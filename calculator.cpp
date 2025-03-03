#include <iostream>
using namespace std;

// Function to add two numbers
double add(double x, double y) {
    return x + y;
}

// Function to subtract two numbers
double subtract(double x, double y) {
    return x - y;
}

// Function to multiply two numbers
double multiply(double x, double y) {
    return x * y;
}

// Function to divide two numbers
double divide(double x, double y) {
    if (y == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return x / y;
}

int main() {
    double num1, num2;
    char operation;

    cout << "Selamat datang di aplikasi kalkulator sederhana!" << endl;
    cout << "Input dua angka: ";
    cin >> num1 >> num2;

    cout << "Pilih operasi perhitungan (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    return 0;
}

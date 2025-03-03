#include <iostream>
#include <cmath> // Include cmath for pow() function
using namespace std;

// Function to calculate power
double power(double x, double y) {
    return pow(x, y);
}

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

// Update the main function to include the power operation
int main() {
    double num1, num2;
    char operation;

    cout << "Selamat datang di aplikasi kalkulator sederhana!" << endl;
    cout << "Input dua angka: ";
    cin >> num1 >> num2;

    cout << "Pilih operasi perhitungan (+, -, *, /, ^): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Hasil: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Hasil: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Hasil: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Hasil: " << divide(num1, num2) << endl;
            break;
        case '^':
            cout << "Hasil: " << power(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    return 0;
}

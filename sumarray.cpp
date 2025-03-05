#include <iostream>
using namespace std;

int main() {
    int count;

    // Ask the user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> count;

    // Create an array to hold the numbers
    int* numbers = new int[count];

    // Input the numbers
    cout << "Enter " << count << " numbers: ";
    for (int i = 0; i < count; i++) {
        cin >> numbers[i];
    }

    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }

    // Output the result
    cout << "The sum of the numbers is: " << sum << endl;

    // Free the dynamically allocated memory
    delete[] numbers;

    return 0;
}

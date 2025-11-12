//Program description: This program is simply a scientific calculator.

#include <iostream>
#include <vector>
#include "calculator.h"
using namespace std;

int main() {
    Calculator calc;
    int choice;
    double num;

    while (true) {
        cout << "\n--- Scientific Calculator ---\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        cout << "5. Power\n6. Square Root\n7. Sine\n8. Cosine\n9. Tangent\n0. Exit\n";
        cout << "Choose operation: ";
        cin >> choice;

        if (choice == 0) break;

        vector<double> numbers;
        char input[50];
        //Cases for the input that the user chooses to solve
        switch (choice) {
            case 1: // addition
            case 2: // subtraction
            case 3: // multiplication
            case 4: // division
                cout << "Enter numbers (type '=' to calculate):\n";
                while (true) {
                    cin >> input;
                    if (input[0] == '=') break;
                    numbers.push_back(atof(input));
                }
                if (numbers.empty()) {
                    cout << "No numbers entered.\n";
                    break;
                }
                double result;
                result = numbers[0];
                for (size_t i = 1; i < numbers.size(); ++i) {
                    switch (choice) {
                        case 1: result = calc.add(result, numbers[i]); break;
                        case 2: result = calc.subtract(result, numbers[i]); break;
                        case 3: result = calc.multiply(result, numbers[i]); break;
                        case 4: result = calc.divide(result, numbers[i]); break;
                    }
                }
                cout << "Result: " << result << endl;
                break;

            case 5:
                double base, exp;
                cout << "Enter base and exponent: ";
                cin >> base >> exp;
                cout << "Result: " << calc.power(base, exp) << endl;
                break;

            case 6:
                cout << "Enter number: ";
                cin >> num;
                cout << "Result: " << calc.squareRoot(num) << endl;
                break;

            case 7:
                cout << "Enter angle (radians): ";
                cin >> num;
                cout << "Result: " << calc.sine(num) << endl;
                break;

            case 8:
                cout << "Enter angle (radians): ";
                cin >> num;
                cout << "Result: " << calc.cosine(num) << endl;
                break;

            case 9:
                cout << "Enter angle (radians): ";
                cin >> num;
                cout << "Result: " << calc.tangent(num) << endl;
                break;

            default:
                cout << "Invalid choice.\n";
        }

        cin.clear();
    }

    cout << "Calculator closed.\n";
    return 0;
}

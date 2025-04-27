#include <iostream>
using namespace std;

int main() {

    
	int num1;
	int num2;
	int operation;
	cout << "Enter First Number" << endl;
	cin >> num1;
	cout << "Enter Second Number" << endl;
	cin >> num2;
	cout << "Choose your operation" << endl;
	cout << "1 : Add" << endl;
	cout << "2 : Substraction" << endl;
	cout << "3 : Multiply" << endl;
	cout << "4 : Divide" << endl;
	cin >> operation;


    if (operation == 1) {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (operation == 2) {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (operation == 3) {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (operation == 4) {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        }
        else {
            cout << "Error: Cannot divide by zero." << endl;
        }
    }
    else {
        cout << "Invalid operation selected." << endl;
    }

	return 0;
}
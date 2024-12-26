#include <iostream>
using namespace std;

int main() {
    int n[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> n[i];
    }
    cout << "First number: " << n[0] << endl;
    cout << "Last number: " << n[4];
    return 0;
}

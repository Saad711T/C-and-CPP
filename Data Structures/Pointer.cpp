#include <iostream>
using namespace std;


int main() {

	int x = 20;
	int* ptr = &x;
	int* prr = &ptr;

	cout << prr;
	return 0;
}
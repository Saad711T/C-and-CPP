#include <iostream>
using namespace std;

int main()
{
    int arraySize;
    cout << "Enter array size\n";
    cin >> arraySize;
    int array[arraySize];
    cout << "Enter numbers\n";

    for (int counter = 0; counter < arraySize; counter++)
    {
        cin >> array[counter];
    }

    cout << "The array is: ";
    for (int counter = 0; counter < arraySize; counter++)
    {
        cout << array[counter] << " ";
    }
    cout << endl;

    for (int counter = 0; counter < arraySize; counter++)
    {
        for (int innerCount = 0; innerCount < arraySize - 1; innerCount++)
        {
            if (array[innerCount] > array[innerCount + 1])
            {
                int temp = array[innerCount];
                array[innerCount] = array[innerCount + 1];
                array[innerCount + 1] = temp;
            }
        }
    }

    cout << "The array after sort: ";
    for (int counter = 0; counter < arraySize; counter++)
    {
        cout << array[counter] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

void linearSearch()
{
    int array[100], search, count, number;
    cout << "You Have Selected Linear Search\n";
    cout << "Please Enter the number of elements: ";
    cin >> number;

    cout << "Enter numbers:\n";
    for (count = 0; count < number; count++)
    {
        cin >> array[count];
    }

    cout << "Enter the number to search: ";
    cin >> search;

    bool found = false;
    for (count = 0; count < number; count++)
    {
        if (array[count] == search)
        {
            cout << "Number is present at location " << count + 1 << "\n";
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Number not found in the array.\n";
    }
}

void binarySearch()
{
    int count, first, last, middle, num, search, array[100];
    cout << "You Have Selected Binary Search\n";
    cout << "Enter number of elements: ";
    cin >> num;

    cout << "Enter numbers:\n";
    for (count = 0; count < num; count++)
    {
        cin >> array[count];
    }

#sort(array, array + num);

    cout << "Enter value to find: ";
    cin >> search;

    first = 0;
    last = num - 1;
    bool found = false;

    while (first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] < search)
        {
            first = middle + 1;
        }
        else if (array[middle] == search)
        {
            cout << "Number found at location " << middle + 1 << "\n";
            found = true;
            break;
        }
        else
        {
            last = middle - 1;
        }
    }

    if (!found)
    {
        cout << "Number not found in the array.\n";
    }
}

int main()
{
    int operation;
    while (true)
    {
        cout << "\n***** MENU *****\n";
        cout << "1. LINEAR SEARCH\n";
        cout << "2. BINARY SEARCH\n";
        cout << "3. EXIT\n";
        cout << "PLEASE ENTER YOUR CHOICE: ";
        cin >> operation;

        switch (operation)
        {
        case 1:
            linearSearch();
            break;
        case 2:
            binarySearch();
            break;
        case 3:
            cout << "YOU HAVE SELECTED TO EXIT.\n";
            return 0;
        default:
            cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
}

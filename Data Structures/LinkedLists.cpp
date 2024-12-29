#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void appendNode(int value)
{
    node *newNode = new node();
    newNode->data = value;
    newNode->next = NULL;

    if (!head)
        head = newNode;
    else
    {
        node *curr = head;
        while (curr->next)
            curr = curr->next;
        curr->next = newNode;
    }
}

void insertNode(int value)
{
    node *newNode = new node();
    newNode->data = value;
    newNode->next = NULL;

    if (!head || head->data >= value)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        node *curr = head;
        while (curr->next && curr->next->data < value)
            curr = curr->next;

        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void displayList()
{
    node *curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void deleteNode(int value)
{
    if (!head)
    {
        cout << "List is empty.\n";
        return;
    }

    if (head->data == value)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted.\n";
        return;
    }

    node *curr = head;
    while (curr->next && curr->next->data != value)
        curr = curr->next;

    if (curr->next)
    {
        node *temp = curr->next;
        curr->next = temp->next;
        delete temp;
        cout << "Node deleted.\n";
    }
    else
    {
        cout << "Value not found in the list.\n";
    }
}

int findMaxNode()
{
    if (!head)
    {
        cout << "List is empty.\n";
        return INT_MIN;
    }

    int maxVal = head->data;
    node *curr = head;
    while (curr)
    {
        if (curr->data > maxVal)
            maxVal = curr->data;
        curr = curr->next;
    }
    return maxVal;
}

int countNodes()
{
    int count = 0;
    node *curr = head;
    while (curr)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

bool searchItem(int value)
{
    node *curr = head;
    while (curr)
    {
        if (curr->data == value)
            return true;
        curr = curr->next;
    }
    return false;
}

int main()
{
    int choice, x;

    do
    {
        system("cls");
        cout << "1. Append Node\n";
        cout << "2. Insert Node\n";
        cout << "3. Delete Node\n";
        cout << "4. Find Maximum Node\n";
        cout << "5. Display Linked List\n";
        cout << "6. Search Node\n";
        cout << "7. Count Nodes\n";
        cout << "8. Exit\n";
        cout << "Enter your choice (1-8): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a value: ";
            cin >> x;
            appendNode(x);
            cout << "Value appended.\n";
            break;
        case 2:
            cout << "Enter a value to insert: ";
            cin >> x;
            insertNode(x);
            cout << "Value inserted.\n";
            break;
        case 3:
            cout << "Enter a value to delete: ";
            cin >> x;
            deleteNode(x);
            break;
        case 4:
            x = findMaxNode();
            if (x != INT_MIN)
                cout << "Maximum value is: " << x << endl;
            break;
        case 5:
            displayList();
            break;
        case 6:
            cout << "Enter value to search: ";
            cin >> x;
            if (searchItem(x))
                cout << "Value found in the list.\n";
            else
                cout << "Value not found.\n";
            break;
        case 7:
            cout << "Number of nodes in the list: " << countNodes() << endl;
            break;
        case 8:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

        system("pause");

    } while (choice != 8);

    return 0;
}

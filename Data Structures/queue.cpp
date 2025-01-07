#include <iostream>
#define MAX 10
using namespace std;

int front = 0, rear = 0, ch, i;
int q[MAX], ele;

void Enqueue()
{
    if (rear == MAX)
        cout << "\nQueue is full";
    else
    {
        cout << "\nEnter an element: ";
        cin >> ele;
        q[rear] = ele;
        rear++;
        cout << "\nElement inserted successfully\n";
    }
}

void Dequeue()
{
    if (front == rear)
        cout << "\nQueue is empty";
    else
    {
        ele = q[front];
        front++;
        cout << "\nThe deleted element is: " << ele;
    }
}

void Display()
{
    if (front == rear)
        cout << "\nQueue is empty";
    else
    {
        cout << "\nThe elements in the queue are: ";
        for (i = front; i < rear; i++)
            cout << q[i] << " ";
        cout << "\n";
    }
}

int main()
{
    bool flag = true;
    do
    {
        cout << "\n***MENU***";
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit";
        cout << "\nEnter your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Display();
            break;
        case 4:
            flag = false;
            break;
        default:
            cout << "Enter correct Choice\n";
        }
    } while (flag);

    return 0;
}

#include <stdio.h>
#include <string.h>

struct book
{
    int id;
    char name[50];
    double price;
};

int main()
{
    struct book book1 = {1, "Hamlet", 29.99};
    struct book book2 = {2, "World History", 129.50};
    struct book book3 = {3, "Linear Algebra", 13.00};

    printf("book 3 is: %s\n", book3.name);

    return 0;
}

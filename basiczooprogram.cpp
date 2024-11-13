#include <iostream>
using namespace std;
int main()
{
      int age, ticket = 30;
      cout << "Welcome to zoo\n";
      cout << "Please Enter the age :";
      cin >> age;
      if(age <= 5)
      cout << "Your ticket is free" << endl;
      else if(age <= 12)
      {
          ticket=ticket/2;
          cout << "Your ticket price: "<<ticket<<" Riyals"<<endl;
      }   
      else
       cout << "Your ticket price: "<< ticket<<" Riyals"<<endl;
       cout << "Thank you"<<endl;
       return 0;
}
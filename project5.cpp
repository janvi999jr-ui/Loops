#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
    int num1;
    int i = 1;
    int count = 0;
    while (true) // true means the loop will run indefinitely until we break it from inside
    {
        cout << "Guess the number (1-100) : ";
        cin >> num1;
        count++;
        if (num1 == 42)
        {
            cout << "Correct! You got it in " << count << " attempts." << endl;
            break;
        }
        else if (num1 < 42)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Too high! Try again." << endl;
        }
    }
    int num2;
    int num3;
    int choice;
    cout << "Enter the first number : ";
    cin >> num2;
    cout << "Enter the second number : ";
    cin >> num3;
    do
    {
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Result : " << num2 + num3 << endl;
        }
        else if (choice == 2)
        {
            cout << "Result : " << num2 - num3 << endl;
        }

    } while (choice != 3); // when we enter 3, the loop will stop and we will exit the program
    return 0;
}
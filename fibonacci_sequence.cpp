/**
 * Finonacci exercise:
 * Return the fibonacci sequence based on the given amount.
 * eg -> input = 8 | output 0 1 1 2 3 5 8 13
 */
#include <iostream>

using namespace std;

/** Return the next fibonacci number considering:
 * next_num = (current_num -1) + (current_num -2)
 */
int fibonacci_seq(int const &number)
{
    if (number > 1)
    {
        return fibonacci_seq(number - 1) + fibonacci_seq(number - 2);
    }
    else
    {
        return number;
    }
}

int main()
{
    int amount;
    cout << "Introduce the amount of fibonacci numbers to print: ";
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
        cout << fibonacci_seq(i) << ' ';
    }
    cout << endl;
    return 0;
}

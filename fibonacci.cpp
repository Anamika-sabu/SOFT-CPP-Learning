#include <iostream>
using namespace std;

int main()
{
    int n;
    int first = 0, second = 1, next;
    int i = 1;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";

    while (i <= n)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;

        i++;
    }

    return 0;
}
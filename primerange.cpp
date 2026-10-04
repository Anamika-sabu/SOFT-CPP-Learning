#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Prime numbers are: ";

    int num = start;

    while (num <= end)
    {
        int i = 1;
        int count = 0;

        while (i <= num)
        {
            if (num % i == 0)
            {
                count++;
            }

            i++;
        }

        if (count == 2)
        {
            cout << num << " ";
        }

        num++;
    }

    return 0;
} 
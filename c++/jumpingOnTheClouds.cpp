#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int count = -1;

    for (int i = 0; i < n - 2; i++)
    {
        int n1 = c[n + 1];
        int n2 = c[n + 2];

        if (n2 == 0)
            i += 1;
        else if (n1 == 1)
            i += 1;

        count++;
    }

    cout << count;

    return 0;
}
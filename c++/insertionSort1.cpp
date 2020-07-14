#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (auto &v : a)
        cin >> v;

    int k = n - 1;
    int v = a[k];

    while (v < a[k - 1])
    {
        a[k] = a[k - 1];
        k--;
        for (const auto v : a)
            cout << v << " ";
        cout << endl;
    }

    a[k] = v;
    for (const auto v : a)
        cout << v << " ";

    return 0;
}

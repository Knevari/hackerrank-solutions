#include <iostream>

using namespace std;

int main()
{
    int b, n, m;
    cin >> b >> n >> m;

    int k[n];
    int d[m];

    unsigned int i, j;
    for (i = 0; i < n; i++)
        cin >> k[i];
    for (i = 0; i < m; i++)
        cin >> d[i];

    int max = -1;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            int price = k[i] + d[j];
            if (price > max && price <= b)
                max = price;
        }

    cout << max;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int p, d, m, s;
    cin >> p >> d >> m >> s;

    int q = floor((p - m) / d);
    int n = p + q * -d;

    int sum = (q + 1) / 2 * (n + p);

    int total;

    if (s > sum)
    {
        total = (q + 1) + floor((s - sum) / m);
    }
    else
    {
        int b = p * 1.0 / d - 0.5;
        int j = b - sqrt(b * b - 2.0 / d * (s - p));
        total = ceil(j);
    }

    cout << total;
}
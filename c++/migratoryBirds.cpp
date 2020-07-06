#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (auto &v : a)
        cin >> v;

    sort(a, a+n);

    int max = 0, count = 0, tok, res;

    for (int i = n; i > 0; i--)
    {
        if (tok != a[i])
        {
            tok = a[i];
            count = 0;
        }

        count++;

        if (count >= max) {
            max = count;
            res = tok;
        }
    }

    cout << res;

    return 0;
}

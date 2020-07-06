#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> c(n);

    for (auto &v : c)
        cin >> v;

    auto exists = [&](int v) {
        return binary_search(c.begin(), c.end(), v);
    };

    int res = count_if(c.begin(), c.end(), [&](int v) {
        return exists(v - d) && exists(v - d * 2);
    });

    cout << res;

    return 0;
}
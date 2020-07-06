#include <iostream>
#include <unordered_map>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    unordered_map<int, vector<int>> m;

    for (auto &v : a)
        cin >> v;

    for (int i = 0; i < n; i++)
    {
        m[a[i]].push_back(i);
    }

    int min = INT32_MAX;

    for (const auto &v : m)
    {
        if (v.second.size() == 2)
        {
            int distance = v.second[1] - v.second[0];
            if (distance < min)
                min = distance;
        }
    }

    if (min == INT32_MAX)
        min = -1;

    cout << min;

    return 0;
}
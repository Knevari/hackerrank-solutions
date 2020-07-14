#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> rows(n);
    for (auto &row : rows)
        cin >> row;

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            int cell = rows[i][j];

            if (cell > rows[i][j - 1] &&
                cell > rows[i][j + 1] &&
                cell > rows[i - 1][j] &&
                cell > rows[i + 1][j])
            {
                // found cavity
                rows[i][j] = 'X';
            }
        }
    }

    for (auto &row : rows)
        cout << row << endl;

    return 0;
}
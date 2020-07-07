#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    for (auto &v : a)
        cin >> v;

    int special = 0;
    int currentPage = 1;

    for (int i = 0; i < n; i++)
    {
        int chapterProblems = a[i];
        int fullPages = floor(chapterProblems / k);
        int leftover = chapterProblems % k;
        int totalPages = fullPages + (leftover ? 1 : 0);

        int probs = 0;
        int start, end;

        for (int i = 0; i < totalPages; i++)
        {
            if (i == totalPages - 1 && leftover)
            {
                probs += leftover;
                start = probs - leftover + 1;
            }
            else
            {
                probs += k;
                start = probs - k + 1;
            }

            end = probs;

            if (currentPage >= start && currentPage <= end)
                special++;

            currentPage += 1;
        }
    }

    cout << special;

    return 0;
}

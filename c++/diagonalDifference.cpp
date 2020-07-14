#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, a = 0, b = 0;
  cin >> n;

  int a[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j) a += a[i][j];
      if (i + j == n-1) b += a[i][j];
    }
  }

  cout << abs(a - b);

  return 0;
}

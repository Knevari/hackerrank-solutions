#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int c = 1;
    for (int i = 0; i < s.size(); i++)
        if (isupper(s[i]))
            c++;
    cout << c;

    return 0;
}

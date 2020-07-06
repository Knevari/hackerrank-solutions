/*
    RepeatedStrings (s, n)
        Given an "infinite" pattern s, return the number of times the character a is repeated 
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    long n, c;
    cin >> n;

    c = n / s.size() * count(s.begin(), s.end(), 'a') + count(s.begin(), s.begin()+n%s.size(), 'a');

    cout << c;

    return 0;
}
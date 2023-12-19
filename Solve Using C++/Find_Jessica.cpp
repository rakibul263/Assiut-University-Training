#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2 = "Jessica";
    getline(cin, s1);

    stringstream s(s1);
    string n;

    while (s >> n)
    {
        if (n == s2)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}

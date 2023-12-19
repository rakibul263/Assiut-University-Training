#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, x;
        cin >> s >> x;
        int xlen = x.length();
        while (1)
        {
            int p = s.find(x);
            if (p == -1)
            {
                break;
            }
            else
            {
                s.replace(p, xlen, "#");
            }
        }
        cout << s << endl;
    }
    return 0;
}

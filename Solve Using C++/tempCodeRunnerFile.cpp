#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + n, greater<long long int>());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

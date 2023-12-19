#include <bits/stdc++.h>
using namespace std;
int *sort_it(int size)
{
    int *a = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    sort(a, a + size, greater<int>());
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *ans = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    delete ans;
    return 0;
}

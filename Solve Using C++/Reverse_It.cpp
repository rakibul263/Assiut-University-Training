#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};

int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id;
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].cls < a[j].cls)
            {
                swap(a[i].sec,a[j].sec);
            }
            else
            {
                swap(a[i].sec,a[j].sec);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << endl;
    }
    return 0;
}

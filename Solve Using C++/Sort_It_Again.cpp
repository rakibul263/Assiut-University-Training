#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
};

int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math >> a[i].eng;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].eng < a[j].eng)
            {
                swap(a[i], a[j]);
            }
            if (a[i].eng == a[j].eng)
            {
                if (a[i].math < a[j].math)
                {
                    swap(a[i], a[j]);
                }
            }
            if (a[i].eng == a[j].eng && a[i].math == a[j].math)
            {
                if (a[i].id > a[j].id)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }
    return 0;
}

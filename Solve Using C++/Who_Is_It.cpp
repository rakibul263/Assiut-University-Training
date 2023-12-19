#include <bits/stdc++.h>
using namespace std;
class student
{
public:
  int id;
  char name[101];
  char sec;
  int mark;
};
int
main ()
{
  int n;
  cin >> n;
  for(int i=0;i<n;i++)
    {
      student s1, s2, s3;
      cin >> s1.id >> s1.name >> s1.sec >> s1.mark;
      cin >> s2.id >> s2.name >> s2.sec >> s2.mark;
      cin >> s3.id >> s3.name >> s3.sec >> s3.mark;
      int mx = max ({ s1.mark, s2.mark, s3.mark });
      if (mx == s1.mark)
	{
	  cout << s1.id << " " << s1.name << " " << s1.sec << " " << s1.mark << endl;
	}
      else if (mx == s2.mark)
	{
	  cout << s2.id << " " << s2.name << " " << s2.sec << " " << s2.mark << endl;
	}
      else
	{
	  cout << s3.id << " " << s3.name << " " << s3.sec << " " << s3.mark << endl;
	}
    }
}

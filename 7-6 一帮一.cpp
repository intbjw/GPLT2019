#include<bits/stdc++.h>
using namespace std;

struct student
{
	int sex;
	char name[10];
	bool flag = true;
}s[50];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].sex >> s[i].name;
	}
	for (int i = 0; i < n / 2; i++)
	{
		for (int j = n - 1; j >= n / 2; j--)
		{
			if (!s[j].flag) continue;
			if (s[i].sex != s[j].sex)
			{
				cout << s[i].name << " " << s[j].name << endl;
				s[i].flag = false;
				s[j].flag = false;
				break;
			}
		}
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	double l, r, x, y;
	cin >> l >> r;
	x = r*cos(l / r), y = r*sin(l / r);
	printf("%.3f %.3f\n%.3f %.3f", x,-y,x,y);
	return 0;
}

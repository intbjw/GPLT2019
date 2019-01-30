#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w, p;
    double w1, p1, vx, vy, v, distan, jer, t;
    while(~scanf("%d %d", &w, &p))
    {
        jer = 1000;
        distan = 0;
        w1 = 1.0 * w / 100;
        p1 = 1.0 * p / 100;
        while(jer)
        {
            v = sqrt((2.0 * jer)/w1);
            vx = (sqrt(2) / 2 ) * v;
            vy = vx;
            t = vy / 9.8;
            distan += 2 * t * vx;
            if(2 * t * vx < 0.0000001)
                break;
            jer = jer - jer * p1;
        }
        printf("%.3lf\n", distan);
    }
    return 0;
}

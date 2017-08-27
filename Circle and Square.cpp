#include<bits/stdc++.h>>
using namespace std;
int main()
{
    int t;
    double ans;
    cin >> t;
    while(t--)
    {
        double r;
        ans = 0.0;
        scanf("%lf",&r);
        while(r>0.0000000000000000001)
        {
            ans += r;
            r = r/sqrt(2.00);
        }
        printf("%.1lf\n",ans);
    }
}

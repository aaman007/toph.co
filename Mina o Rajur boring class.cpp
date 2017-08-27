#include<bits/stdc++.h>
using namespace std;
int dp[37]={0,1};
int fib(int  n)
{
    if(n==1 || n==0)
        return n;
    else
    {
        if(dp[n])
            return dp[n];
        else
        {
            dp[n] = fib(n-1)+fib(n-2);
            return dp[n];
        }
    }
}
double area[37];
int main()
{
    int t,n;
    cin >> t;
    fib(36);
    double pi=3.141593;

    for(int i=1;i<=37;i++)
    {
        area[i] = ((double)dp[i]*(double)dp[i]-((pi*(double)dp[i]*(double)dp[i])/4.0));
        area[i] += area[i-1];
    }
    while(t--)
    {
       cin >> n;
       printf("%.2lf\n",area[n]);
    }
}

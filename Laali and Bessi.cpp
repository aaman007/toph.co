#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map < ll,ll > dp,dp2;
void sieve(ll m)
{
    for(ll i=2;i<=m;i++)
        dp2[i] = 1;
    for(ll i=2;i<=m;i++)
    {
        if(dp2[i])
        {
            for(ll j=2;i*j<=m;j++)
            {
                dp2[i*j] = 0;
            }
        }
    }
}
void divF(long long m)
{
    while(m%2==0)
    {
        dp[m] = 2;
        m /= 2;
    }
    for(ll i=3;i<=sqrt(m);i+=2)
    {
        while(m%i==0)
        {
            dp[m] = i;
            m /= i;
        }
    }
    if(m>2)
        dp[m] = m;
}
int main()
{
    long long int n,m,div;

    cin >> n >>m;
    divF(m);
    div = dp[m];
    long long int i=2;
    while(i<=n)
    {
        if(m%i==0 && i==div)
        {
            n = n-i ;
            m /= i ;
            div = dp[m];
        }
        i++;
        if(i>div)
            break;
        else
            i = div;
    }
    cout << n << " " << m << endl;
    return 0;
}

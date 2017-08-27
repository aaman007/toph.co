#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m=1;
    cin >> t;
    while(t--)
    {
        int n;
        long long int x=1;
        cin >> n;
        int s = n,cnt=0;
        while(s>0)
        {
            cnt++;
            x = 1;
            for(int i=1;i<=s;i++)
            {
                if(s>=x)
                    s-=x;
                x *= 2;
            }
        }
        cout << "Case " << m << ": ";
        m++;
        cout << cnt << endl;
    }
}


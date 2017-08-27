#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    char s[2005];

    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        int len = strlen(s);
        int x=0,temp = 0;
        string ss="",tmp;
        for(int j=0;j<15;j++)
        {
            ss+=s[j];
            temp += ((int)s[j]-96);
        }
        int t = temp;
        tmp=ss;
        while(x<len)
        {
            int cnt = 0;
            t -= (s[x]-96);
            tmp.erase(0,1);
            tmp += (s[(15+x)%len]);
            t += s[(15+x)%len]-96;
            //cout <<tmp <<" "<<ss << endl;
            if(ss>tmp)
                temp = t,ss=tmp;
            x++;
        }
        sum += temp;
    }
    printf("%d\n",sum);
}


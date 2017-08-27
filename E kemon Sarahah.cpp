#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    scanf("%d ",&t);
    string s1="cheater",s2="kala para na",s3="appy nyc lagca",s4="programmer";
    //getchar();
    while(t--)
    {
        string ans="";
        getline(cin,s);
        int len = s.length();
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='c' && s[i]!='k' && s[i]!='a' && s[i]!='p')
                ans += s[i];
            else
            {
                if(s.find(s1)==i)
                    ans += "charming",s.erase(i,6);
                else if(s.find(s2)==i)
                    ans += "khela pare",s.erase(i,11);
                else if(s.find(s3)==i)
                    ans += "vaiya you are very handsome",s.erase(i,13);
                else if(s.find(s4)==i)
                    ans += "man with love and life",s.erase(i,9);
                else
                    ans += s[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}


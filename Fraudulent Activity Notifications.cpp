#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,day;
    cin>>n>>day;
    int cnt[202] , ara[n+2];
    memset(cnt,0,sizeof(cnt));
    int sum = 0;
    for(int i=1; i<=day; i++)
    {
        cin>>ara[i];
        cnt[ara[i]]++;
    }
    for(int i=day+1; i<=n; i++)
    {
        cin>>ara[i];
        if(day%2)
        {
            int th = day/2 + 1;
            for(int j=0; j<=200; j++)
            {
                if(cnt[j]>=th)
                {
                    if(j*2<=ara[i])
                        sum++;
                    break;
                }
                th-=cnt[j];
            }
        }
        else
        {
            int th = day/2;
            for(int j=0; j<=200; j++)
            {
                if(cnt[j]>=th)
                {
                    if(cnt[j]>th)
                    {
                        if(j*2<=ara[i])
                            sum++;
                    }
                    else{
                        int v = j;
                        while(cnt[++j]==0){}
                        v+=j;
                        if(v<=ara[i])
                            sum++;
                    }
                    break;
                }
                th-=cnt[j];
            }
        }
        cnt[ara[i-day]]--;
        cnt[ara[i]]++;
    }
    cout<<sum<<endl;
    return 0;
}
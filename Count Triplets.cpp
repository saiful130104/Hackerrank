#include<bits/stdc++.h>

using namespace std;

typedef long long int lng;

void solve()
{
    lng n,r;
    cin>>n>>r;
    lng ara[n+4];
    unordered_map<lng,lng>mp,mpp;
    unordered_map<lng,bool>mpb,mppb;
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
        if(mpb[ara[i]]==0)
            mp[ara[i]]=1;
        else
            mp[ara[i]]++;
        mpb[ara[i]]=1;
    }
    lng sum=0;
    if(r==1){
        for(int i=0; i<n-1;i++)
        {
            if(mp[ara[i]]>2)
            {
                lng tsm = mp[ara[i]]-2;
                tsm*=(tsm+1);
                tsm/=2;
                sum+=tsm;
            }
            mp[ara[i]]--;
        }
        cout<<sum<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        mpp[ara[i]]++;
        mppb[ara[i]]=1;
        if(ara[i]%r){

        }
        else if(mppb[ara[i]/r]==1 && mpb[ara[i]*r]==1)
            sum+=(mpp[ara[i]/r]*mp[ara[i]*r]);
         mp[ara[i]]--;
            if(mp[ara[i]]==0)
                mpb[ara[i]]=0;
    }
    cout<<sum<<endl;

}

int main()
{

    int tst=1;
    while(tst--)
        solve();
    return 0;
}
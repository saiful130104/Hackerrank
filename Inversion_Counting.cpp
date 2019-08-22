#include<bits/stdc++.h>

using namespace std;
typedef long long int lng;

int ara[200003];
lng cnt=0;

void MergeSort(int lo, int mid, int nd)
{
    int lsz = mid-lo+1, rsz = nd-mid;
    int leftAra[lsz+1],rightAra[rsz+1],index=lo,i=0,j=0;
    for(int i=0; i<lsz; i++)
        leftAra[i] = ara[i+lo];
    for(int i=0; i<rsz; i++)
        rightAra[i] = ara[i+mid+1];
    while(i<lsz && j<rsz)
    {
        if(leftAra[i]<=rightAra[j])
            ara[index++]=leftAra[i++];
        else
            ara[index++]=rightAra[j++],cnt+=(lsz-i);
    }
    while(i<lsz)
        ara[index++]=leftAra[i++];
    while(j<rsz)
        ara[index++]=rightAra[j++];
}

void Merge(int lo, int nd)
{
    if(lo>=nd)
        return;
    int mid = lo + (nd-lo)/2;
    Merge(lo,mid);
    Merge(mid+1,nd);
    MergeSort(lo,mid,nd);
}

void solve()
{
    cnt=0;
    int sz;
    cin>>sz;
    for(int i=0; i<sz; i++)
        cin>>ara[i];
    Merge(0,sz-1);
    cout<<cnt<<endl;
}
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
        solve();
    return 0;
}


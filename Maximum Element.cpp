#include<bits/stdc++.h>

using namespace std;

int main() {
    int sz=0,mx_ara[100002],st[100002],type,n;
    mx_ara[0]=0;
    cin>>n;
    while(n--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>type;
            sz++;
            st[sz] = type;
            mx_ara[sz] = max(mx_ara[sz-1],st[sz]);
        }
        else if(type==2)
            sz--;
        else
        cout<<mx_ara[sz]<<endl;
    }
    return 0;
}
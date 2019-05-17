#include<bits/stdc++.h>
 
using namespace std;
 
vector<int> Max_Min(vector<int>left, vector<int>right , vector<int>ara)
{
    int sz = left.size(),diff;
    vector<int>v(sz+1);
    for(int i=0; i<=sz; i++)
        v.push_back(0);
    for(int i=0; i<sz; i++)
    {
        diff = right[i] - left[i] - 1;
        v[diff] = max(v[diff],ara[i]);
    }
    return v;
}
 
vector<int> L_index(vector<int>v)
{
    int sz = v.size();
    vector<int>vv(sz);
    stack<int>st;
    for(int i=0; i<sz; i++)
    {
        while(!st.empty() && v[st.top()]>= v[i])
            st.pop();
        if(st.empty())
            vv[i] = -1;
        else
            vv[i] = st.top();
        st.push(i);
    }
    return vv;
}
 
vector<int>R_index(vector<int>v)
{
    int sz = v.size();
    vector<int>vv(sz);
    stack<int>st;
    for(int i=sz-1; i>=0; i--)
    {
        while(!st.empty() && v[st.top()] >= v[i])
            st.pop();
        if(st.empty())
            vv[i] = sz;
        else
            vv[i] = st.top();
        st.push(i);
    }
    return vv;
}
 
int main()
{
    int tst=1;
    //cin>>tst;
    while(tst--)
    {
        int n,x;
        cin>>n;
        vector<int>v,left,right;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        left = L_index(v);
        /*for(int i=0; i<n; i++)
        {
            if(i)
                printf(" ");
            printf("%d",left[i]);
        }
        printf("\n");*/
        right = R_index(v);
        /*for(int i=0; i<n; i++)
        {
            if(i)
                printf(" ");
            printf("%d",right[i]);
        }
        printf("\n");*/
        v = Max_Min(left,right,v);
        for(int i=n-1; i>=1; i--)
            v[i] = max(v[i],v[i+1]);
        for(int i=1; i<=n; i++)
        {
            if(i>1)
                printf(" ");
            printf("%d",v[i]);
        }
        printf("\n");
    }
 
    return 0;
}
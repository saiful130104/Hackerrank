#include<bits/stdc++.h>

using namespace std;

typedef long long int lng;

lng max_area(vector<int>hist)
{
    int sz = hist.size(),top,area=0,i=0;
    stack<int>st;
    while(i<sz)
    {
        if(st.empty() || hist[st.top()]<=hist[i])
            st.push(i++);
        else
        {
            top = st.top();
            st.pop();
            if(st.empty())
                area = max(area, hist[top]*i);
            else
                area = max(area, hist[top]*(i-st.top()-1));
        }
    }
    while(!st.empty())
    {
        top = st.top();
        st.pop();
        if(st.empty())
            area = max(area, hist[top]*i);
        else
            area = max(area, hist[top]*(i-st.top()-1));
    }
    return area;
}

int main()
{
    int n,x;
    vector<int>hist;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        hist.push_back(x);
    }
    cout<<max_area(hist)<<endl;
    return 0;
}
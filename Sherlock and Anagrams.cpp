#include <bits/stdc++.h>

using namespace std;

int anagramsCount(string str)
{
    map< vector<int>, int> mp;
    int sz = str.size();
    for(int i=0; i<sz; i++)
    {
        vector<int> frequency(26,0);
        for(int j=i; j<sz; j++)
        {
            frequency[str[j]-'a']++;
            mp[frequency]++;
        }
    }
    int result = 0;
    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        int val = it->second;
        result+=((val*(val-1))/2);
    }
    return result;
}

int main()
{
    int tst;
    cin>>tst;
    //cin.ignore();
    while(tst--)
    {
        string str;
        cin>>str;
        cout<<anagramsCount(str)<<endl;
    }
    return 0;
}
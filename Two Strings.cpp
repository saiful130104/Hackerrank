#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2) {
    map<char,bool>mp;
    for(int i=0; i<s1.size(); i++)
        mp[s1[i]]=1;
    for(int i=0; i<s2.size(); i++)
        if(mp[s2[i]])
            return "YES";
    return "NO";
}

int main()
{
    int q;
    cin >> q;
    cin.ignore();
    for (int i = 0; i < q; i++) {
        string s1,s2;
        getline(cin, s1);
        getline(cin, s2);
        string result = twoStrings(s1, s2);

        cout << result << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

void checkMagazine(string magazine, string note) {
    map<string, int>mg,nt;
    map<string, bool>mgb,ntb;
    stringstream ss(magazine);
    string word;
    while(ss>>word){
        mg[word]++;
        mgb[word]=1;
    }
    stringstream s(note);
    while(s>>word){
        if(mgb[word]){
            mg[word]--;
            if(mg[word]==0)
                mgb[word]=0;
        }
        else{
            printf("No\n");
            return;
        }
    }
    printf("Yes\n");
    return;

}

int main()
{
    int m,n;
    cin>>n>>m;
    string magazine,note;
    cin.ignore();
    getline(cin, magazine);
    getline(cin, note);
    checkMagazine(magazine, note);
    return 0;
}
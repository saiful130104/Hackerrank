#include <bits/stdc++.h>

using namespace std;

typedef long long int lng;
unordered_map<lng,bool>isValue;
unordered_map<lng,lng>frequency;
lng cnt[1000003];

int main(){
    int tst;
    scanf("%d",&tst);
    //unordered_map<lng,bool>isValue;
    //unordered_map<lng,int>frequency;
    while(tst--)
    {
        int type;
        lng value;
        scanf("%d%lld",&type,&value);
        if(type==3)
        {
            if(value>1000000)
                printf("0\n");
            else if(cnt[value]>0)
                printf("1\n");
            else
                printf("0\n");
        }
        else if(type==1)
        {
            if(isValue[value])
                cnt[frequency[value]]--;
            isValue[value]=1;
            frequency[value]++;
            cnt[frequency[value]]++;
        }
        else
        {
            if(isValue[value])
            {
                cnt[frequency[value]]--;
                frequency[value]--;
            }
            if(frequency[value]==0)
                isValue[value]=0;
            cnt[frequency[value]]++;
        }
    }

    return 0;
}

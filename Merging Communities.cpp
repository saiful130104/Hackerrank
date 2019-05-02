                    ///Bismillahir Rahmanir Rahim
                ///  Saiful Islam ,,,,CSE_14,JUST
            /// isaifulislam123@gmail.com, isaifulislam123@yahoo.com
///Problem link: https://www.hackerrank.com/challenges/merging-communities/problem

#include <bits/stdc++.h>
#define lng long long int
#define pf printf
#define sc scanf
#define sci(a) sc("%d",&a)
#define sci2(a,b) sc("%d%d",&a,&b)
#define sci3(a,b,c) sc("%d%d%d",&a,&b,&c)
#define scl(a) sc("%lld",&a)
#define scl2(a,b) sc("%lld%lld",&a,&b)
#define scl3(a,b,c) sc("%lld%lld%lld",&a,&b,&c)
#define scd(a) sc("%lf",&a)
#define scd2(a,b) sc("%lf%lf",&a,&b)
#define scd3(a,b,c) sc("%lf%lf%lf",&a,&b,&c)
#define caseprint_space(a) pf("Case %: ",a++)
#define caseprint_line(a) pf("Case %:\n",a++)
#define new_line pf("\n");
#define pb(v,a) v.push_back(a)

using namespace std;
const int N = 100005;

int Parent[N],Size[N];

void init( int n)
{
    for(int i=1; i<=n; i++)
    {
        Parent[i]=i;
        Size[i] =1;
    }
}

int Find(int x)
{
    if(x == Parent[x])
        return x;
    else
        return Parent[x] = Find(Parent[x]);
}

void Union(int x, int y)
{
    int u = Find(x);
    int v = Find(y);
    if(u != v)
    {
        Parent[u] = v;
        Size[Parent[u]] += Size[u];
    }
}

void solve()
{
       int n,q;
       sci2(n,q);
       init(n);
       while(q--)
       {
            char ch;
            cin>>ch;
            if(ch=='Q'){
                int p;
                sci(p);
                printf("%d\n",Size[Parent[Find(p)]]);
            }
            else{
                int r,s;
                sci2(r,s);
                Union(r,s);
            }
       }
}

int main()
{
    int tst = 1;
    //sci(tst);
    while(tst--)
        solve();
    return 0;
}
#include<bits/stdc++.h>

using namespace std;
vector<string>str;

struct node
{
  int x,y;
};
int grid[101][101],n;

int twoDBfs(int sx,int sy, int ex, int ey)
{
    queue<node>q;
    node u,v;
    u.x = sx, u.y = sy;
    q.push(u);
    grid[sx][sy]=0;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        int cost=grid[u.x][u.y]+1;
        for(int i=u.x+1; i<n;i++)
        {
            v.x = i;
            v.y = u.y;
            if(str[i][u.y]=='X')
                break;
            if(cost<grid[i][u.y])
            {
                q.push(v);
                grid[i][u.y]=cost;
            }
        }
        for(int i=u.x-1; i>=0; i--)
        {
            v.x = i;
            v.y = u.y;
            if(str[i][u.y]=='X')
                break;
            if(cost<grid[i][u.y])
            {
                q.push(v);
                grid[i][u.y]=cost;
            }
        }
        for(int i=u.y+1; i<n;i++)
        {
            v.x = u.x;
            v.y = i;
            if(str[u.x][i]=='X')
                break;
            if(cost<grid[u.x][i])
            {
                q.push(v);
                grid[u.x][i]=cost;
            }
        }
        for(int i=u.y-1; i>=0;i--)
        {
            v.x = u.x;
            v.y = i;
            if(str[u.x][i]=='X')
                break;
            if(cost<grid[u.x][i])
            {
                q.push(v);
                grid[u.x][i]=cost;
            }
        }
    }
    return grid[ex][ey];
}

int main()
{
    int x1,x2,y1,y2;
    cin>>n;
    string st;
    for(int i=0;i<100;i++)
        for(int j=0; j<100;j++)
        grid[i][j] = 10000;
    for(int i=0; i<n; i++)
    {
        cin>>st;
        str.push_back(st);
    }
    cin>>x1>>y1>>x2>>y2;
    cout<<twoDBfs(x1,y1,x2,y2)<<endl;
    return 0;
}
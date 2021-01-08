#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
///white for not visited
///gray for visited but not printed
///black for printed
int main()
{
    int n;
    int e;
    cin>>n>>e;
    int a[n+1][n+1];
    queue<int>q;
    char visited[n+1];
    int level[n+1];
    for(int i=0; i<=n; i++)
    {
        level[i]=0;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            a[i][j]=0;
        }
    }
    while(e--)
    {
        int f,s;
        cin>>f>>s;
        a[f][s]=1;
        a[s][f]=1;
    }
    for(int i=1; i<=n; i++)
    {
        visited[i]='w';
    }
    q.push(1);
    level[1]=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        if(visited[x]!='b')
        {
            cout<<x<<endl;
            visited[x]='b';
        }
        for(int i=1; i<=n; i++)
        {
            if(i==x)
            {
                continue;
            }
            if(a[x][i]==1)
            {
                if(visited[i]=='w')
                {
                    q.push(i);
                    level[i]=level[x]+1;
                    visited[i]='g';
                }
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" distance= "<<level[i]<<endl;
    }
    return 0;
}


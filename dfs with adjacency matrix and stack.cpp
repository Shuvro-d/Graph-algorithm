#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int main()
{
    int n;
    int e;
    cin>>n>>e;
    int a[n+1][n+1];
    stack<int>q;
    bool visited[n+1];
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
        visited[i]=false;
    }
    q.push(1);


    while(!q.empty())
    {
        int x=q.top();
        if(visited[x]==false){
                cout<<x<<endl;
                visited[x]=true;
        }
        bool flag=true;
        for(int i=1; i<=n; i++)
        {
            if(i==x)
            {
                continue;
            }
            if(a[x][i]==1)
            {
                if(visited[i])
                {
                    continue;
                }
                q.push(i);
               flag=false;
                break;
            }
        }
        if(flag)q.pop();
    }
    return 0;
}



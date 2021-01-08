#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
ll a[10000][10000];
char visited[10000];
queue<ll>q;
ll level[10000];
void bfs(ll n, ll sv)
{
     if(visited[sv]!='b'){
            cout<<sv<<endl;
             visited[sv]='b';
     }
     for(ll i=1;i<=n;i++){
        if(sv==i){
            continue;
        }
        if(a[sv][i]==1){
            if(visited[i]=='w'){
           q.push(i);
           visited[i]='g';
           level[i]=level[sv]+1;
            }
        }
     }
     while(!q.empty()){
        ll x=q.front();
        q.pop();
        bfs(n,x);
     }
}
int main()
{
     ll n;
     ll e;
     cin>>n>>e;
     for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            a[i][j]=0;
        }
     }

     for(ll i=1;i<=e;i++){
        ll f,s;
        cin>>f>>s;
        a[f][s]=1;
        a[s][f]=1;
     }
     for(ll i=1;i<=n;i++){
         visited[i]='w';
     }
     cout<<"printing bfs"<<endl;
     level[1]=0;
     bfs(n,1);
     for(ll i=1;i<=n;i++){
        cout<<i<<"level="<<level[i]<<endl;
     }
     return 0;
}


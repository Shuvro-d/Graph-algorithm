#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int edges[10000][10000];
bool visited[10000];
void dfs(int n, int sv)
{
     cout<<sv<<endl;
     visited[sv]=true;
     for(int i=1;i<=n;i++){
            if(i==sv){
                continue;
            }
        if(edges[sv][i]==1){
                if(visited[i]){
                    continue;
                }
            dfs(n,i);
        }
     }
}
int main()
{
     int n;
     int e;
     cin>>n>>e;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            edges[i][j]=0;
        }
     }

     for(int i=1;i<=e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
     }
     for(int i=1;i<=n;i++){
         visited[i]=false;
     }
     cout<<"printing dfs"<<endl;
     dfs(n,1);
     /*cout<<"Enter a range to find it has a path or not"<<endl;
     int l,r;
     cin>>l>>r;
     dfs(n,l);
     if(visited[r]==1)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;*/
     return 0;
}



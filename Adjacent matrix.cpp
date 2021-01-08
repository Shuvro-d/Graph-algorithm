#include <bits/stdc++.h>
using namespace std;
int i,j;
int adj[100][100];
int node,edge;
int main() {
      freopen("input","r",stdin);
     cin>>node>>edge;
     int n1,n2;
     for(i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
     }
     for(i=0;i<node;i++){
        for(j=0;j<node;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}

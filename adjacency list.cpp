#include<bits/stdc++.h>
using namespace std;
int i,j;
int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<int>vec[node];
    int n1,n2;
    for(i=0;i<edge;i++){
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }
    for(i=0;i<node;i++){
        for(j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

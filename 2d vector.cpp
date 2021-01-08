#include<bits/stdc++.h>
using namespace std;
int i,j;
int main()
{
    int row,col;
    cin>>row>>col;
    vector< vector<int> >vec;
    int n;
    for(i=0; i<row; i++)
    {
        vector<int>temp;
        for(j=0; j<col; j++)
        {
            cin>>n;
            temp.push_back(n);
        }
        vec.push_back(temp);
    }
    for(i=0; i<vec.size(); i++)
    {
        for(j=0; j<vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

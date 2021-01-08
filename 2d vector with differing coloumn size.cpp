#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;
    vector< vector<int> >vec;
    for (int i = 0; i<=row; i++) {
        vector<int> input;
        int number;
        string line;
        getline(cin, line);
        stringstream ss(line);
        while (ss >> number) input.push_back(number);
        vec.push_back(input);
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

/*************************************************************************
*      Author : PRASANJIT ROY                                            *
*      Date   : 27-02-2025                                               *
*      Problem:  https://codeforces.com/problemset/problem/2170/A        *
*      Notes:                                                            *
*      - Grid /BFS / DFS / DP / Grid / Graph etc.                        *
*************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int n;
int sumArr[1005][1005];

vector<pair<int,int>> d = {
    {-1,0}, {1,0}, {0,-1}, {0,1}
};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < n);
}

void solve()
{
    cin >> n;

    int num = 1;
    vector<vector<int>> grid(n, vector<int>(n));

    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            grid[i][j] = num++;

    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int s = grid[i][j];

            for(int k = 0; k < 4; k++)
            {
                int si = i + d[k].first;
                int sj = j + d[k].second;

                if(valid(si, sj))
                {
                    s += grid[si][sj];
                }
            }

            sumArr[i][j] = s;
           
        }
        
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mx=max(mx,sumArr[i][j]);
        }
    }
    
    cout<<mx<<endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}
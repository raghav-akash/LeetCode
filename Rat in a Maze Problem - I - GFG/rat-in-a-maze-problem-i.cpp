// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int i,int j,vector<vector<int>> &m,int n, vector<string> &vc,string path,int di[],int dj[],vector<vector<int>> &visit)
    {
        if(i==n-1 && j==n-1)
        {
            vc.push_back(path);
            return;
        }
        
        string way="DLRU";
        for(int ind=0;ind<4;ind++)
        {
            int ni=i+di[ind];
            int nj=j+dj[ind];
            if(ni>=0 && ni<n && nj>=0 && nj<n && !visit[ni][nj] && m[ni][nj]==1)
            {
                visit[i][j]=1;
                solve(ni,nj,m,n,vc,path+way[ind],di,dj,visit);
                visit[i][j]=0;
            }
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> vc;
        vector<vector<int>> visit(n,vector<int> (n,0));
        int di[]={1,0,0,-1};
        int dj[]={0,-1,1,0};
        if(m[0][0]==1) solve(0,0,m,n,vc,"",di,dj,visit);
        return vc;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    void solve(int ind,vector<int> &A,int B,vector<int> &ds,vector<vector<int>> &vc )
    {
        if(ind==A.size())
        {
            if(B==0)
            {
            vc.push_back(ds);
            }
            return ;
        }
        
        if(A[ind]<=B)
        {
            ds.push_back(A[ind]);
            solve(ind,A,B-A[ind],ds,vc);
            ds.pop_back();
        }
        solve(ind+1,A,B,ds,vc);
    }
    
    vector<vector<int>> combinationSum(vector<int> &A, int B) {
        vector<vector<int>> vc;
        vector<int> ds;
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        solve(0,A,B,ds,vc);
        return vc;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends
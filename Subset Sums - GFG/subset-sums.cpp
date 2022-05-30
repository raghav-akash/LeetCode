// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void subsum(int ind,int sum,vector<int> &vc,vector<int> &arr)
    {
        if(ind==arr.size())
        {
            vc.push_back(sum);
            return;
        }
        
        subsum(ind+1,sum+arr[ind],vc,arr);
        subsum(ind+1,sum,vc,arr);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> vc;
        subsum(0,0,vc,arr);
        sort(vc.begin(),vc.end());
        return vc;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
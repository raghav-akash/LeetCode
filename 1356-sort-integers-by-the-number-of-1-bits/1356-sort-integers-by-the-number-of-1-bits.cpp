class Solution {
public:
    int bits(int n)
    {
        int count=0;
        while(n>0)
        {
            count+=n&1;
            n=n>>1;
        }
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> vc;
        vector<int> ans;
        for(int i=0;i<arr.size();i++)
        {
            int x=bits(arr[i]);
            vc.push_back({x,arr[i]});
        }
        sort(vc.begin(),vc.end());
        for(int i=0;i<vc.size();i++)
        {
            ans.push_back(vc[i].second);
        }
        
        return ans;
    }
};
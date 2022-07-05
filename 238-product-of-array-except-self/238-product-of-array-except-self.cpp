class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,1);
        vector<int> right(n,1);
        vector<int> ans;
        int product=1;
        for(int i=0;i<n;i++)
        {
            left[i]=product;
            product*=nums[i];
        }
        product=1;
        for(int i=n-1;i>=0;i--)
        {
            right[i]=product;
            product*=nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(left[i]*right[i]);
        }
        
        return ans;
    }
};
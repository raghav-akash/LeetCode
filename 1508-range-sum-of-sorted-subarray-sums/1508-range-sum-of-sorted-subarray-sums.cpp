class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> vc;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                vc.push_back(sum);
            }
        }
        sort(vc.begin(),vc.end());
        int nsum=0;
        for(int i=left-1;i<right;i++)
        {
            nsum+=vc[i];
            nsum=nsum%1000000007;
        }
        return nsum;
    }
    
};
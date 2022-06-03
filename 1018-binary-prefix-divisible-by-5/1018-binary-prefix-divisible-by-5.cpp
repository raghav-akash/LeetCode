class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> vc;
        long long int num=0;
        for(int i=0;i<nums.size();i++)
        {
            num=(num*2+nums[i])%5;
            if(num==0) vc.push_back(true);
            else vc.push_back(false);
        }
        return vc;
    }
};
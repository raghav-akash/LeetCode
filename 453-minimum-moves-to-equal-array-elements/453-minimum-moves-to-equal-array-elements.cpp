class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt=0;
        int min=*min_element(nums.begin(),nums.end());
        for(auto i:nums)
        {
            cnt+=abs(i-min);
        }
        return cnt;
    }
};
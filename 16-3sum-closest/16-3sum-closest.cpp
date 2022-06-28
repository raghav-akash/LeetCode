class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int nsum=nums[i]+nums[j]+nums[k];
                if(abs(nsum-target)<abs(sum-target)) sum=nsum;
                else if(nsum>target) k--;
                else j++;
            }
        }
        return sum;
    }
};
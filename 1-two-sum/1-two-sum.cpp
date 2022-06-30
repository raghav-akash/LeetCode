class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> x;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int b=target-a;
            for(int j=i+1;j<nums.size();j++){
                if(b==nums[j]){
                    x.push_back(i);
                    x.push_back(j);
                    break;
                }
            }
        }
        return x;
    }
};
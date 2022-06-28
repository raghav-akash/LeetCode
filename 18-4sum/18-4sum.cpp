class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> vc;
        vector<vector<int>> vc1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                long long int sum=nums[j]+nums[i];
                int l=j+1;
                int r=nums.size()-1;
                while(l<r)
                {
                    long long int temp=sum+nums[l]+nums[r];
                    if(temp>target) 
                        r--;
                    else if(temp<target) 
                        l++;
                    else
                    {
                        vc.insert({nums[i], nums[j], nums[l++], nums[r--]});
                    }
                }
                
                }
        }
           for(auto i:vc){
               vc1.push_back(i);
           }
    return vc1;
    }
};
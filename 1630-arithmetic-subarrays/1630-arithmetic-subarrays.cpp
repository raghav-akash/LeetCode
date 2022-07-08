class Solution {
public:
    bool helper(vector<int> &nums,int l,int r)
    {
        vector<int> temp(nums.begin()+l,nums.begin()+r+1); // Create a vector of the numbers between l,r from nums
        sort(temp.begin(),temp.end()); //Sort it to check the Arithmetic seq as sorted number will form it
        int diff=temp[1]-temp[0];
        for(int i=2;i<temp.size();i++)
        {
            if(temp[i]-temp[i-1]!=diff) return false; //Check if diff is equal
        }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++)
        {
            if(helper(nums,l[i],r[i])) ans.push_back(1); //If the function returns true we push 1 else 0
            else ans.push_back(0);
        }
        return ans;
    }
};
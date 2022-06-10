class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int mis=-1, rep=-1;
        vector<int> vc(n+1,0);
        for(int i=0;i<n;i++)
        {
            vc[nums[i]]++;
        }
        for(int j=1;j<n+1;j++)
        {
            if(vc[j]==2) 
            {
                rep=j;
            }
            else if(vc[j]==0)
            {
                mis=j;
            }
        }
        return {rep,mis};
    }
};
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vc;
        int n=nums.size();
        int num1,num2,count1=0,count2=0;
        for(auto i:nums)
        {
            if(i==num1)
            {
                count1++;
            }
            else if(i==num2)
            {
                count2++;
            } 
            else if(count1==0)
            {
                num1=i;
                count1++;
            }
            else if(count2==0)
            {
                num2=i;
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        
        count1=count2=0;
        for(auto i:nums)
        {
            if(i==num1) count1++;
            else if(i==num2) count2++;
        }
        
        if(count1>n/3)
            vc.push_back(num1);
        if(count2>n/3)
            vc.push_back(num2);
        
        return vc;
    }
};
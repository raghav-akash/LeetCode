class Solution {
public:
    int xxor(vector<int> &vc, int index, int sum)
    {
        if(index==vc.size()) return sum;
        int take=xxor(vc,index+1,sum^vc[index]);
        int leave=xxor(vc,index+1,sum);
        return take+leave;
    }
    
    int subsetXORSum(vector<int>& nums) 
    {
        int sumf=xxor(nums,0,0);
        return sumf;
    }
};
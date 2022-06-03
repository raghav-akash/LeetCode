class NumArray {
public:
    vector<int> vc;
    NumArray(vector<int>& nums) {
        vc.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            vc.push_back(nums[i]+vc[i-1]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) return vc[right];
        return vc[right]-vc[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
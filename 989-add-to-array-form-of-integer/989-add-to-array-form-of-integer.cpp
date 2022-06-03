class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> vc;
        int n=num.size()-1;
        int c=0;
        while(n>=0 || k || c)
        {
            if(k)
            {
                c+=k%10;
                k/=10;
            }
            
            if(n>=0)
            {
                c+=num[n];
                n--;
            }
            vc.push_back(c%10);
            c/=10;
        }
        reverse(vc.begin(),vc.end());
        return vc;
    }
};
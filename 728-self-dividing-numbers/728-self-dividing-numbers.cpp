class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vc;
        int flag=0;
        for(int i=left;i<=right;i++)
        {
            int n=i;
            while(n>0)
            {
                int den=n%10;
                if(den==0 || i%den!=0) break;
                
                 n/=10;
            }
           
            if(n==0) vc.push_back(i);
        }
        return vc;
    }
};
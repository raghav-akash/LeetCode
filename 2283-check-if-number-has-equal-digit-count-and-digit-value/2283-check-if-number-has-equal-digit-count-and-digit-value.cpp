class Solution {
public:
    bool digitCount(string num) {
        int n=num.length();
        vector<int> vc(n,0);
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            int j=0;
            while(j<n)
            {
                if((num[j]-'0')==i) 
                cnt++;
                j++;
            }
            vc[i]=cnt;
        }
        
        int l=0;
        for(auto i:vc)
        {
            cout<<i;
            if((num[l]-'0')!=i) return false;
            l++;
        }
        return true;
    }
};
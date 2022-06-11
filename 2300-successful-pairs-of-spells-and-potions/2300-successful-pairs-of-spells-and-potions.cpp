class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> vc;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++)
        {
            int l=0,r=potions.size()-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if((long long int)spells[i]*(long long int)potions[mid]>=success)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            vc.push_back(potions.size()-l);
        }
        return vc;
    }
};
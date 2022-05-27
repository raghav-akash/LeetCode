class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l=0;
        int r=people.size()-1;
        int cnt=0;
        sort(people.begin(),people.end());
        while(l<=r)
        {
            if(people[l]+people[r]>limit) 
            {
                cnt++;
                r--;
            }
            else
            {
                cnt++;
                l++;
                r--;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=cardPoints.size()-k;
        int sum=0;
        for(int i=r;i<cardPoints.size();i++)
        {
            sum+=cardPoints[i];
        }
        int maxsum=sum;
        while(r<cardPoints.size())
        {
            sum+=(cardPoints[l++]-cardPoints[r++]);
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
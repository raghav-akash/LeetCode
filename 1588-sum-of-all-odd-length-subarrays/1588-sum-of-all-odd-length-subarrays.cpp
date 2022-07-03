class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int x=(n-i)*(i+1);
            x=(x+1)/2;
            sum+=(x*arr[i]);
        }
        return sum;
    }
};
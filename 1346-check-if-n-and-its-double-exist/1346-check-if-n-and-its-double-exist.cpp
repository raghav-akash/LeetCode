class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int num=0;
        int j,k;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<0)
            {
                j=0;
                k=i-1;
            }
            else
            {
                j=i+1;
                k=arr.size()-1;
            }
            int num=2*arr[i];
            while(j<=k)
            {
                int mid=(j+k)/2;
                if(num==arr[mid])
                {
                    return true;
                }
                else if(arr[mid]<num)
                {
                    j++;
                }
                else if(arr[mid]>num)
                {
                    k--;
                }
            }
        }
        return false;
    }
};
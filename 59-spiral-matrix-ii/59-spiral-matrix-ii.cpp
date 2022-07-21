class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vc(n,vector<int>(n));
        int top=0, bottom=n-1,left=0,right=n-1;
        int num=1;
        int i=0,j=0;
        while(left<=right && top<=bottom)
        {
            while(j<=right)
            {
                vc[top][j++]=num++;
            }
            top++;
            i=top;
            while(i<=bottom)
            {
                vc[i++][right]=num++;
            }
            right--;
            j=right;
            while(j>=left)
            {
                vc[bottom][j--]=num++;
            }
            bottom--;
            i=bottom;
            while(i>=top)
            {
                vc[i--][left]=num++;
            }
            left++;
            j=left;
        }
        return vc;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if (!matrix.size() || !matrix[0].size()) return false;
        
        int row,l=0,r=matrix.size()-1,mid;
        
        //Finding the row in which the element exists
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(target<matrix[mid][0])
            {
                r=mid-1;
            }
            else if(target>matrix[mid].back())
            {

                l=mid+1;
            }
            else
            {
                row=mid;
                break;
            }
        }

        //Finding the element in the row
        l=0, r=matrix[0].size()-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(matrix[row][mid]<target)
            {
                l=mid+1;
            } 
            else if(matrix[row][mid]>target)
            {
                r=mid-1;
            }
            else 
            {
                return true;
            }
        }
        
        return false;
    }  
};
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> max;
        int diff,i;
        for(i=0;i<heights.size()-1;i++)
        {
            diff=heights[i+1]-heights[i];
            
            if(diff<0) continue;
            
            bricks-=diff;
            max.push(diff);
            
            if(bricks<0)
            {
                bricks+=max.top();
                max.pop();
                ladders--;
            }
            
            if(ladders<0) break;
        }
        
        return i;
    }
};
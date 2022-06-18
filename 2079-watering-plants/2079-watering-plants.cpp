class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int step=0,water=capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(water>=plants[i])
            {
                step++;
                water-=plants[i];
            }
            else if(water<plants[i])
            {
                step+=2*(i+1)-1;
                water=capacity-plants[i];
            }
        }
        return step;
    }
};
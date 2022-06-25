class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
       int area=0;
       vector<int> vc;
       for(auto i:points)
       {
           vc.push_back(i[0]);
       }
       sort(vc.begin(),vc.end());
       for(int i=0;i<vc.size()-1;i++)
       {
           area=max(area,vc[i+1]-vc[i]);
       }
       return area;
    }
};
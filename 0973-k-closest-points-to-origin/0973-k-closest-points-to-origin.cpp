class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> vc;
        priority_queue<vector<int>> pq;
        for (auto p :points) {
            int x = p[0], y = p[1];
            pq.push({x*x + y*y, x, y});
            if (pq.size()>k) {
                pq.pop();
            }
        }
        for (int i=0;i<k;i++) {
            vc.push_back({pq.top()[1], pq.top()[2]});
            pq.pop();
        }
        return vc;
    }
};
class Solution {
public:
    int maxArea(int height, int width, vector<int>& h, vector<int>& v) {
        long long int mod=1000000007;
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        int hmax=h[0],vmax=v[0];
        h.push_back(height);
        v.push_back(width);
        for(int i=1;i<h.size();i++)
        {
            hmax=max(hmax,h[i]-h[i-1]);
        }
        
        for(int i=1;i<v.size();i++)
        {
            vmax=max(vmax,v[i]-v[i-1]);
        }
        return ((vmax%mod)*(hmax%mod)%mod);
    }
};
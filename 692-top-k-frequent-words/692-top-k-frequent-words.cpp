class Solution {
public:
    static bool comp(pair<int,string> a, pair<int,string> b)
    {
        if(a.first==b.first) return a.second<b.second;
        
        return a.first>b.first;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(string i: words) {
            mp[i]++;
        }
        
        vector<pair<int,string>> v;
        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),comp);
        vector<string> vc;
        for(int i=0;i<k;i++)
        {
            vc.push_back(v[i].second);
        }
        return vc;
    }
};
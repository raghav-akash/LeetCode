class Solution {
public:
    string getHint(string secret, string guess) {
        map<char,int> smap,gmap;
        int b=0,c=0;
        string ans;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            {
                b++;
            }
            else 
            {
                smap[secret[i]]++;
                gmap[guess[i]]++;
            }
        }
        
        for(auto i:gmap)
        {
            if(gmap.find(i.first)!=smap.end())
            {
                c+=min(gmap[i.first],smap[i.first]);
            }
        }
        
        ans+=to_string(b)+"A"+to_string(c)+"B";
        
        return ans;
    }
};
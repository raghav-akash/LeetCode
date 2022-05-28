class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> mp;
        for(int i=0;i<messages.size();i++)
        {
            int cnt=0;
            for(int j=0;j<messages[i].size();j++)
            {
                if(messages[i][j]==' ') cnt++;
            }
            mp[senders[i]]+=cnt+1;
        }
        string sender="";
        int maxx=INT_MIN;
        for(auto i: mp)
        {
            if(i.second>maxx)
            {
                maxx=i.second;
                sender=i.first;
            }
            else if(i.second==maxx)
            {
                maxx=i.second;
                if(i.first>sender)
                {
                    sender=i.first;
                }
            }
        }
        return sender;
    }
};
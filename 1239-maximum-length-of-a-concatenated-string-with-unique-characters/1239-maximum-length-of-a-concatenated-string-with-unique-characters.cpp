class Solution {
public:
    int len=0;
    bool check(string s)
    {
        vector<int> vc(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(vc[s[i]-'a'])
            {
                return false;
            }
            vc[s[i]-'a']++;
        }
        return true;
    }
    void helper(vector<string>& arr, int ind, string s)
    {
      len=max(len,(int)s.length());
      if(ind==arr.size())
      {
          return;
      }
      
      if(check(s+arr[ind]))
      {
          helper(arr,ind+1,s+arr[ind]);
      }
      helper(arr,ind+1,s);  
    }
    
    int maxLength(vector<string>& arr) {
        helper(arr,0,"");
        return len;
    }
};
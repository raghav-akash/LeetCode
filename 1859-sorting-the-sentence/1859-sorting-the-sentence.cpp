class Solution {
public:
    string sortSentence(string s) {
       vector<string> vc(10,"");
       for(int i=0;i<s.length();i++)
       {
           int j=i;
           string ans;
           while(isalpha(s[j]))
           {
               ans+=s[j];
               j++;
           }
           vc[s[j]-'0']=ans;
           i=j+1;
       }
       string fs;
       for(auto i:vc)
       {
          if(i.length()>0)
          {
              fs+=i;
              fs+=' ';
          }
       }
       fs.pop_back();
       return fs;
    }
};
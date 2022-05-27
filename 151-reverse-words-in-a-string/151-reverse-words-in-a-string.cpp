class Solution {
public:
    string reverseWords(string s) {
        string s1;
        int i=0,n=s.length();
        while(i<n){
            while(i<n && s[i]==' ') 
            {
                i++;
            }
            if(i>=n) break;
            int j=i;
            while(j<n && s[j]!=' ') 
            {
                j++;
            }
            string word=s.substr(i, j-i);
            if(s1.length()==0) 
            {
                s1=word;
            }
            else 
            {
                s1=word+" "+s1;
            }
            i=j+1;
        }  
        return s1;
    }
};
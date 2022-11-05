class Solution {
public:
    
    string addBinary(string a, string b) {
       int i=a.length()-1;
       int j=b.length()-1;
       int c=0;
       string s="";
       while(i>=0 || j>=0 || c>0)
       {
           if(i>=0)
           {
               c+=a[i]-'0';
               i--;
           }
           
           if(j>=0)
           {
               c+=b[j]-'0';
               j--;
           }
           
           s+=c%2+'0';
           c/=2;
       }
       reverse(s.begin(),s.end());
       return s;
        
    }
};
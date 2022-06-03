class Solution {
public:
    string addStrings(string num1, string num2) {
      int i=num1.length()-1;
      int j=num2.length()-1;
      int c=0;
      string s;
      while(i>=0 || j>=0 || c)
      {
          if(i>=0)
          {
              c+=num1[i--]-'0';
          }
          
          if(j>=0)
          {
              c+=num2[j--]-'0';
          }
          
          s+=(c%10)+'0';
          c/=10;
      }
        reverse(s.begin(),s.end());
        return s;
    }
};
class Solution {
public:
    int myAtoi(string s) {
       int n=s.length(); 
       int i=0;
       while(s[i]==' ')
       {
           i++;
       }
       bool neg=false;
       if(s[i]=='-') 
       {
           i++;
           neg=true;
       }
       else if(s[i]=='+')
       {
           i++;
       }
       while(s[i]=='0') 
       {
           i++;
       }
        
       long long int a=0;
       while(i<n && s[i]>='0' && s[i]<='9')
       {
           a=a*10+(s[i]-'0');
           if(-a<INT_MIN && neg==true)
           {
           return INT_MIN;
           }
            else if(a>INT_MAX && neg==false)
           {
               return INT_MAX;
           }
           i++;
       }
       if(neg==true) return -a;
       return a;
    }
};
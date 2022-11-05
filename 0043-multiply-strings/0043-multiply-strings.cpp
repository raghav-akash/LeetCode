class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
            return "0";
        
        int len1=num1.length();
        int len2=num2.length();
        string s="";
        vector<int> vc(len1+len2,0);
        int ind1=0;
        int ind2=0;
        for(int i=len1-1;i>=0;i--)
        {
            int carry=0;
            int a=num1[i]-'0';
            ind2=0;
            for(int j=len2-1;j>=0;j--)
            {
                int b=num2[j]-'0';
                int sum=a*b+carry+vc[ind1+ind2];
                carry=sum/10;
                vc[ind1+ind2]=sum%10;
                ind2++;
            }
            if(carry>0)
            {
                vc[ind1+ind2]+=carry; 
            }
            ind1++;
            
        }
            int i=vc.size()-1;
            while (i>=0 && vc[i] == 0)
            {
                i--;
            }
            
            while(i>=0)
            {
                s+=to_string(vc[i--]);
            }
                
        return s;
    }
};
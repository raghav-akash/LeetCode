class Solution {
public:
    int tribonacci(int n) {
        vector<long long int> vc(38,0);
        vc[1]=1;
        vc[2]=1;
        if(n>2)
        {
          for(int i=3;i<=n;i++)
          {
            vc[i]=vc[i-1]+vc[i-2]+vc[i-3];
          }  
        }
        
        return vc[n];
    }
};
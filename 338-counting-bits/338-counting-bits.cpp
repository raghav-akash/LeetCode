class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> vc(n);
       vc.push_back(0);
       if(n==0) return vc;
       for(int i=1;i<=n;i++)
       {
           if(i%2==0)
           {
               vc[i]=vc[i/2];
           }
           else{
               vc[i]=vc[i-1]+1;
           }
           
       }
        return vc;
    }
};
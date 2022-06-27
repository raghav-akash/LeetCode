class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(int i=0;i<n.length();i++){
            int x;
            x=n[i]-'0';
            maxi=max(maxi,x);
        }
        if(maxi==0){
            return 1;
        }
        else 
            return maxi;
    }
};
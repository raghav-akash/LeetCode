class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.length();
        int i=0,j=0;
        while(i<n && j<n)
        {
            while(start[i]=='_')
            {
                i++;
            }
            while(target[j]=='_')
            {
                j++;
            }       
            if(start[i]!=target[j]) return false;
            if(start[i]==target[j]) 
            {
                if(start[i]=='R' && i>j) return false;
                if(start[i]=='L' && i<j) return false;
                i++;
                j++;
            }
        }
        int startcnt=0;
        while(i<n)
        {
            if(start[i]=='R' || start[i]=='L') 
            {
                startcnt++;
            }
            i++;
        }
        while(j<n)
        {
            if(target[j]=='R' || target[j]=='L')
            {
                startcnt++;
            }
            j++;
        }
        
        if(startcnt) return false;
        return true;
    }
};
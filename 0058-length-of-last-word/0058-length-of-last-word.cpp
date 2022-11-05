class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;   
	    int count=0;
        for(int i=n;i>=0;i--)
	    {
            if(isalpha(s[i]))
            {
			count++;
			if(i-1<0 or s[i-1]==' ')break;
            }
        }
	    return count;
    }
};
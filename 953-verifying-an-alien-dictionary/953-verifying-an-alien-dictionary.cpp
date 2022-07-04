class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0;i<words.size()-1;i++)
        {
            int j=0;
            string s=words[i];
            string p=words[i+1];
            while(s[j]==p[j])
            {
                j++;     
            }
            int index1 = order.find(s[j]);   
            int index2 = order.find(p[j]);
            if (index1 > index2) return false;
        }
        return true;
    }
};
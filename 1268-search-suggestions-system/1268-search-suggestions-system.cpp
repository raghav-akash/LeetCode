class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
     vector<vector<string>> vc;
     sort(products.begin(),products.end());
     int n=products.size(),i,j=0;
     int l=0,r=n-1;
     char s;
     for(i=0;i<searchWord.length();i++)
     {
         s=searchWord[i];
         
         while(l<=r && (products[l].size()<=i || products[l][i]!=s))
         {
             l++;
         }
         while(l<=r && (products[r].size()<=i || products[r][i]!=s))
         {
             r--;
         }
         int sz=r-l+1;
         vector<string> temp;
         sz=min(3,sz);
         for(j=0;j<sz;j++)
         {
             temp.push_back(products[l+j]);
         }
         vc.push_back(temp);
         temp.clear();
     }
     return vc;
    }
};
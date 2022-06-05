class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       int n=rooms.size();
       vector<int> vis(n,0);
       queue<int> q;
       vis[0]=1;
       q.push(0);
       while(!q.empty())
       {
           int x=q.front();
           q.pop();
           for(auto i:rooms[x])
           {
               if(!vis[i])
               {
                   q.push(i);
                   vis[i]=1;
               }
           }
       }
       for(auto i:vis)
       {
            if(i==0) return false;
       }
       return true;
       
       return true;
    }
};
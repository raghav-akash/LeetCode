class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q; // To store all the players
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        int cnt=1; // Count to keep track of k moves
        while(q.size()>1)
        {
            while(cnt<k)
            {
                q.push(q.front()); // Pushing the starting element at the back
                cnt++;
                q.pop();
            }
            q.pop(); // Removing the kth element
            cnt=1;   // Initialising it back to 1
        }
        return q.front();
    }
};
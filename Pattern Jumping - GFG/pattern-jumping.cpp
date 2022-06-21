// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string canJump(long long n) {
        if(n==0) return "True";
        while(n%2==0){
            n/=2;
        }
        
        if(n==1) return "True";
        
        return "False";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.canJump(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
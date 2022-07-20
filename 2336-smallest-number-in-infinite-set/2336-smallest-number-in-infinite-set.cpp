class SmallestInfiniteSet {
public:
    set<int> st;
    int i=1;
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        st.insert(i);
        int ans=i;
        int start=1;
        for(auto x:st)
        {
            if(start!=x)
            {
                i=start;
            }
            else
            {
                start++;
            }
        }
        i=start;
        return ans;
    }
    
    void addBack(int num) {
        st.erase(num);
        i=min(i,num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
class MyCalendar {
    vector<pair<int,int>> vc;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto it:vc)
        {
            if(it.first<end && start<it.second)
            {
                return false;
            }  
        }
        vc.push_back({start,end}); 
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
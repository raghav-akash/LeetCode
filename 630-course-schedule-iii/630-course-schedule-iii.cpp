class Solution {
public:

    bool static comp(vector<int> &a, vector<int> &b)
    {
        return a[1]<b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        //Sort according to the Lastday
        sort(courses.begin(),courses.end(),comp);
        
        priority_queue<int> pq;
        int time=0;
        
        for(auto course:courses)
        {
            //Check if we can take the course
            if(course[0]<=course[1])
            {
                //Check if we don't exceed the lastday, add the duration, push in pq
                if(course[0]+time<=course[1])
                {
                    time+=course[0];
                    pq.push(course[0]);
                }
                else
                {
                    //If the top is bigger than current course then swap
                    if(pq.top()>course[0])
                    {
                        time-=pq.top();
                        pq.pop();
                        time+=course[0];
                        pq.push(course[0]);
                    }
                }
            }
        }
        
        return pq.size();
    }
};
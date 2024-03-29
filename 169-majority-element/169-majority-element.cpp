class Solution {
public:
    int majorityElement(vector<int>& a) {
        int maj_index = 0, count = 1;
        for (int i = 1; i <a.size(); i++) {
            if (a[maj_index] == a[i])
                count++;
            else
                count--;
            if (count == 0) {
                maj_index = i;
                count = 1;
            }
        }
    return a[maj_index];
    }
};
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maximum= 0;
        for(int i=0;i<gain.size();i++){
            int m = m+gain[i];
            maximum = max(m, maximum);
        }
        return maximum;
    }
};
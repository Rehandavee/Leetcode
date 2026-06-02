class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        unordered_map<int,int> map;
        for(int x : nums) {
            if(x % 2 == 0) {
                map[x]++;
            }
        }
        if(map.empty()) {
            return -1;
        }
        int maxFreq = 0;
        int maxEle = -1;
        for(auto it : map) {
            int element = it.first;
            int count = it.second;
            if(count > maxFreq) {
                maxFreq = count;
                maxEle = element;
            }
            else if(count == maxFreq && element < maxEle) {
                maxEle = element;
            }
        }

        return maxEle;
    }
};
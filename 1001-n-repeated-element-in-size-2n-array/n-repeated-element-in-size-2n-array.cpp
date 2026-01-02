 
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> ump;

        for (int i = 0; i < nums.size(); i++) {
            ump[nums[i]]++;          

            if (ump[nums[i]] > 1) {  
                return nums[i];
            }
        }
        return -1; 
    }
};
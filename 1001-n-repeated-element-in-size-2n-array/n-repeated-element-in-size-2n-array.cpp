class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>umap;
        int n=nums.size()/2;
        for(int i:nums){
            umap[i]++;
        }
        for(int i:nums){
            if(umap[i]==n) return i;
        }
        return -1;
    }
};  
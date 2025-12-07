class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>&first = nums[0];
        vector<int>final;
        for(int x : first){
         bool ans=true;
        for(int i=1;i<nums.size();i++){
        bool found=false;
            for(int y:nums[i]){
                if(y==x){
                    found=true;
                    break;
                }
            }
            if(!found){
                ans=false;
                break;
            }
        }
        if(ans){
            final.push_back(x);
        }
        }
        sort(final.begin(),final.end());
        return final;
    }
};
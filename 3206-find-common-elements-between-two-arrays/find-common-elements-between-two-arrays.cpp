class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int cat=0,cnt=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    cnt++;
                    break;
                }
            }
        }
        ans.push_back(cnt);
        for(int j=0;j<nums2.size();j++){
            for(int i=0;i<nums1.size();i++){
                if(nums2[j]==nums1[i]){
                    cat++;
                    break;
                }
            }
        }
        ans.push_back(cat);
        return ans;
    }
};


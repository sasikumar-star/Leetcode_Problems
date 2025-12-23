class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>umap1;
        unordered_map<int,int>umap2;
        for(int i:nums1){
            umap1[i]++;
        }
        for(int j:nums2){
            umap2[j]++;
        }
        int cnt=0,cat=0;
        vector<int>ans;
        for(auto i:nums1){
                if(umap2[i]>0) cnt++;
                //cout<<p.first<<cnt<<endl;
            }
        ans.push_back(cnt);
        for(auto &s:nums2){
            if(umap1[s]>0) cat++;
           // cout<<s.first<<cat<<"-"<<endl;
        }
        ans.push_back(cat);
        return ans;
        }
};




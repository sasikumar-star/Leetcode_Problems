class Solution {
public:
    int maxDistinct(string s) {
        set<char>ans(s.begin(),s.end());
        return ans.size();
    }
};